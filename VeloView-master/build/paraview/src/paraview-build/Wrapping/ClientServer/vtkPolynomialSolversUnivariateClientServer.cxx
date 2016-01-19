// ClientServer wrapper for vtkPolynomialSolversUnivariate object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPolynomialSolversUnivariate.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPolynomialSolversUnivariateClientServerNewCommand(void* /*ctx*/)
{
  return vtkPolynomialSolversUnivariate::New();
}


int VTK_EXPORT vtkPolynomialSolversUnivariateCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPolynomialSolversUnivariate *op = vtkPolynomialSolversUnivariate::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPolynomialSolversUnivariate.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolynomialSolversUnivariate  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolynomialSolversUnivariate  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkPolynomialSolversUnivariate  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HabichtBisectionSolve",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->HabichtBisectionSolve(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HabichtBisectionSolve",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->HabichtBisectionSolve(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HabichtBisectionSolve",method) && msg.GetNumberOfArguments(0) == 9)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp5;
    bool   temp6;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->HabichtBisectionSolve(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SturmBisectionSolve",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->SturmBisectionSolve(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SturmBisectionSolve",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp5;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->SturmBisectionSolve(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SturmBisectionSolve",method) && msg.GetNumberOfArguments(0) == 9)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    double   temp4;
    int      temp5;
    bool   temp6;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SturmBisectionSolve(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FilterRoots",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    int      temp3;
    double   temp4;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->FilterRoots(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FerrariSolve",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    double   temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->FerrariSolve(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TartagliaCardanSolve",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    double   temp3;
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->TartagliaCardanSolve(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SolveCubic",method) && msg.GetNumberOfArguments(0) == 10)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    vtkClientServerStreamDataArg<double > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<double > temp5(msg, 0, 7);
    vtkClientServerStreamDataArg<double > temp6(msg, 0, 8);
    vtkClientServerStreamDataArg<int    > temp7(msg, 0, 9);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      temp5 &&
      temp6 &&
      temp7)
      {
      temp20 = (op)->SolveCubic(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SolveQuadratic",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<double > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<int    > temp5(msg, 0, 7);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      temp5)
      {
      temp20 = (op)->SolveQuadratic(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SolveQuadratic",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    int      temp20;
    if(temp0 &&
      temp1 &&
      temp2)
      {
      temp20 = (op)->SolveQuadratic(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SolveLinear",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<int    > temp3(msg, 0, 5);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3)
      {
      temp20 = (op)->SolveLinear(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDivisionTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDivisionTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDivisionTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDivisionTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkPolynomialSolversUnivariate, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPolynomialSolversUnivariate_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPolynomialSolversUnivariate", vtkPolynomialSolversUnivariateClientServerNewCommand);
    csi->AddCommandFunction("vtkPolynomialSolversUnivariate", vtkPolynomialSolversUnivariateCommand);
    }
}
