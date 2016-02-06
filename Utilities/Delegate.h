
#ifndef DELEGATE_H
#define	DELEGATE_H

#include <string>

namespace LaserMappingDrone {

    // As will be seen below, the Delegate template class is formatted so:
    // Given a method that returns float and takes an int and a char, a delegate type would be:
    // Delegate<float(int, char)>
    
    // The following defines are all you need to make delegates.  Usage:    
    // DELEGATE(func, instRef) makes a delegate to a member method, taking the method and instance, like so:
    // Given:       int MyClass::myMethod(const char) {...}     example usage would be:
    // Delegate<int(const char)> myDelegate = DELEGATE(&MyClass::myMethod, &myClassInstance)
    // and later to invoke the delegate, just call:    myDelegate()
    #define DELEGATE(func, instRef) (NewDelegate(func).Create<func>(instRef))
    #define DELEGATE_NOCLASS(func) (NewDelegate_NoClass(func).CreateForFunction<func>()) // delegate to function
    
    // And here are come all the guts...
    template<typename returnType, typename... params>
    class Delegate; // this advance declaration allows for the templating ahead.
    // main Delegate class definition
    template<typename returnType, typename... params>
    class Delegate<returnType(params...)> {
        typedef returnType (*PtrToFunc)(void* callee, params...);
    public:
        Delegate() {}
        Delegate(void* callee, PtrToFunc function) : calleePtr(callee) , callbackFuncPtr(function) {}
        returnType operator()(params... args) const {
            return (*callbackFuncPtr)(calleePtr, args...);
        }
        bool operator==(const Delegate& rhs) const {
            return (calleePtr == rhs.calleePtr) && (callbackFuncPtr == rhs.callbackFuncPtr);
        }
        bool operator!=(const Delegate& rhs) const {
            return !(this->operator==(rhs));
        }
    private:
        void* calleePtr;
        PtrToFunc callbackFuncPtr;
    };

    // Delegate spawner makes delegates, handles all the casting required for delegate operation.
    template<typename className, typename returnType, typename... params>
    struct DelegateSpawner {
        template<returnType (className::*func)(params...)>
        static returnType MethodCaller(void* o, params... xs){
            return (static_cast<className*>(o)->*func)(xs...);
        }
        template <returnType (*classFuncPtr)(params...)>
        static returnType FunctionCaller(void*, params... xs){
                return (classFuncPtr)(xs...);
        }
        template<returnType (className::*func)(params...)>
        inline static Delegate<returnType(params...)> Create(className* o){
            return Delegate<returnType(params...)>(o, &DelegateSpawner::MethodCaller<func>);
        }
        template<returnType (*classFuncPtr)(params...)>
        inline static Delegate<returnType(params...)> CreateForFunction(){
            return Delegate<returnType(params...)>(0L, &DelegateSpawner::FunctionCaller<classFuncPtr>);
        }
    };
    
    // helper function that returns delegate spawner of member method delegates
    template<typename className, typename returnType, typename... params>
    DelegateSpawner<className, returnType, params... > NewDelegate(returnType (className::*)(params...)){
        return DelegateSpawner<className, returnType, params...>();
    }
    class noType{}; // noType class used in the function below
    // helper function that returns delegate spawner of function delegates
    template<typename returnType, typename... params>
    DelegateSpawner<noType, returnType, params... > NewDelegate_NoClass(returnType (*TFnctPtr)(params...)){
        return DelegateSpawner<noType, returnType, params...>();
    }
}

#endif