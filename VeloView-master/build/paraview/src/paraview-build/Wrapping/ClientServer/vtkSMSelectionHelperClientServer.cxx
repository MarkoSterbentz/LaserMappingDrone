// ClientServer wrapper for vtkSMSelectionHelper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMSelectionHelper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMSelectionHelperClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMSelectionHelper::New();
}


int VTK_EXPORT vtkSMSelectionHelperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMSelectionHelper *op = vtkSMSelectionHelper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMSelectionHelper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMSelectionHelper  *temp20;
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
    vtkSMSelectionHelper  *temp20;
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
    vtkSMSelectionHelper  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewSelectionSourceFromSelection",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSMSession  *temp0;
    vtkSelection  *temp1;
    bool   temp2;
    vtkSMProxy  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMSession") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSelection") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->NewSelectionSourceFromSelection(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewSelectionSourcesFromSelection",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkSelection  *temp0;
    vtkSMProxy  *temp1;
    vtkCollection  *temp2;
    vtkCollection  *temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCollection"))
      {
      op->NewSelectionSourcesFromSelection(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("ConvertSelection",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    vtkSMProxy  *temp1;
    vtkSMSourceProxy  *temp2;
    int      temp3;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkSMSourceProxy") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->ConvertSelection(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MergeSelection",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkSMSourceProxy  *temp0;
    vtkSMSourceProxy  *temp1;
    vtkSMSourceProxy  *temp2;
    int      temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMSourceProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMSourceProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkSMSourceProxy") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->MergeSelection(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMObject";
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
  vtkmsg << "Object type: vtkSMSelectionHelper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMSelectionHelper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMSelectionHelper", vtkSMSelectionHelperClientServerNewCommand);
    csi->AddCommandFunction("vtkSMSelectionHelper", vtkSMSelectionHelperCommand);
    }
}
