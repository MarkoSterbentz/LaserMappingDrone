// ClientServer wrapper for vtkConvertSelection object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkConvertSelection.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkConvertSelectionClientServerNewCommand(void* /*ctx*/)
{
  return vtkConvertSelection::New();
}


int VTK_EXPORT vtkConvertSelectionCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkConvertSelection *op = vtkConvertSelection::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkConvertSelection.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkConvertSelection  *temp20;
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
    vtkConvertSelection  *temp20;
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
    vtkConvertSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDataObjectConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetDataObjectConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInputFieldType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInputFieldType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInputFieldType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInputFieldType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArrayNames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkStringArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkStringArray"))
      {
      op->SetArrayNames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArrayNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetArrayNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearArrayNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearArrayNames();
      return 1;
      }
    }
  if (!strcmp("SetMatchAnyValues",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMatchAnyValues(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMatchAnyValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetMatchAnyValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MatchAnyValuesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MatchAnyValuesOn();
      return 1;
      }
    }
  if (!strcmp("MatchAnyValuesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MatchAnyValuesOff();
      return 1;
      }
    }
  if (!strcmp("SetSelectionExtractor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkExtractSelection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkExtractSelection"))
      {
      op->SetSelectionExtractor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSelectionExtractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkExtractSelection  *temp20;
      {
      temp20 = (op)->GetSelectionExtractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ToIndexSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      temp20 = (op)->ToIndexSelection(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ToGlobalIdSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      temp20 = (op)->ToGlobalIdSelection(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ToPedigreeIdSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      temp20 = (op)->ToPedigreeIdSelection(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ToValueSelection",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    char    *temp2;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->ToValueSelection(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ToValueSelection",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    vtkStringArray  *temp2;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkStringArray"))
      {
      temp20 = (op)->ToValueSelection(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedItems",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    int      temp2;
    vtkIdTypeArray  *temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIdTypeArray"))
      {
      op->GetSelectedItems(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetSelectedVertices",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkGraph  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGraph") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedVertices(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetSelectedEdges",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkGraph  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGraph") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedEdges(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetSelectedPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkDataSet  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataSet") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetSelectedCells",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkDataSet  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataSet") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedCells(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetSelectedRows",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkTable  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTable") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedRows(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ToSelectionType",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkSelection  *temp0;
    vtkDataObject  *temp1;
    int      temp2;
    vtkStringArray  *temp3;
    int      temp4;
    vtkSelection  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkStringArray") &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->ToSelectionType(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkSelectionAlgorithm";
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
  vtkmsg << "Object type: vtkConvertSelection, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkConvertSelection_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkConvertSelection", vtkConvertSelectionClientServerNewCommand);
    csi->AddCommandFunction("vtkConvertSelection", vtkConvertSelectionCommand);
    }
}
