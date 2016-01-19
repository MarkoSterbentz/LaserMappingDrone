// ClientServer wrapper for vtkGL2PSExporter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGL2PSExporter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGL2PSExporterClientServerNewCommand(void* /*ctx*/)
{
  return vtkGL2PSExporter::New();
}


int VTK_EXPORT vtkGL2PSExporterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGL2PSExporter *op = vtkGL2PSExporter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGL2PSExporter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGL2PSExporter  *temp20;
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
    vtkGL2PSExporter  *temp20;
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
    vtkGL2PSExporter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFilePrefix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFilePrefix(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFilePrefix",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFilePrefix();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UsePainterSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UsePainterSettings();
      return 1;
      }
    }
  if (!strcmp("SetFileFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFileFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFileFormatMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFileFormatMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFileFormatMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFileFormatMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFileFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFileFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFileFormatToPS",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFileFormatToPS();
      return 1;
      }
    }
  if (!strcmp("SetFileFormatToEPS",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFileFormatToEPS();
      return 1;
      }
    }
  if (!strcmp("SetFileFormatToPDF",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFileFormatToPDF();
      return 1;
      }
    }
  if (!strcmp("SetFileFormatToTeX",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFileFormatToTeX();
      return 1;
      }
    }
  if (!strcmp("SetFileFormatToSVG",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFileFormatToSVG();
      return 1;
      }
    }
  if (!strcmp("GetFileFormatAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetFileFormatAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSort(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSortMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSortMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSortMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSortMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSort",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSort();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSortToOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSortToOff();
      return 1;
      }
    }
  if (!strcmp("SetSortToSimple",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSortToSimple();
      return 1;
      }
    }
  if (!strcmp("SetSortToBSP",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSortToBSP();
      return 1;
      }
    }
  if (!strcmp("GetSortAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetSortAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompress",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompress(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompress",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCompress();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CompressOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompressOn();
      return 1;
      }
    }
  if (!strcmp("CompressOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompressOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawBackground",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawBackground(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawBackground",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawBackground();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawBackgroundOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawBackgroundOn();
      return 1;
      }
    }
  if (!strcmp("DrawBackgroundOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawBackgroundOff();
      return 1;
      }
    }
  if (!strcmp("SetSimpleLineOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSimpleLineOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSimpleLineOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSimpleLineOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SimpleLineOffsetOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SimpleLineOffsetOn();
      return 1;
      }
    }
  if (!strcmp("SimpleLineOffsetOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SimpleLineOffsetOff();
      return 1;
      }
    }
  if (!strcmp("SetSilent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSilent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSilent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSilent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SilentOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SilentOn();
      return 1;
      }
    }
  if (!strcmp("SilentOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SilentOff();
      return 1;
      }
    }
  if (!strcmp("SetBestRoot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBestRoot(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBestRoot",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBestRoot();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BestRootOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BestRootOn();
      return 1;
      }
    }
  if (!strcmp("BestRootOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BestRootOff();
      return 1;
      }
    }
  if (!strcmp("SetText",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetText(temp0);
      return 1;
      }
    }
  if (!strcmp("GetText",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetText();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TextOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TextOn();
      return 1;
      }
    }
  if (!strcmp("TextOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TextOff();
      return 1;
      }
    }
  if (!strcmp("SetLandscape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLandscape(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLandscape",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLandscape();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LandscapeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LandscapeOn();
      return 1;
      }
    }
  if (!strcmp("LandscapeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LandscapeOff();
      return 1;
      }
    }
  if (!strcmp("SetPS3Shading",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPS3Shading(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPS3Shading",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPS3Shading();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PS3ShadingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PS3ShadingOn();
      return 1;
      }
    }
  if (!strcmp("PS3ShadingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PS3ShadingOff();
      return 1;
      }
    }
  if (!strcmp("SetOcclusionCull",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOcclusionCull(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOcclusionCull",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOcclusionCull();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OcclusionCullOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OcclusionCullOn();
      return 1;
      }
    }
  if (!strcmp("OcclusionCullOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OcclusionCullOff();
      return 1;
      }
    }
  if (!strcmp("SetWrite3DPropsAsRasterImage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWrite3DPropsAsRasterImage(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWrite3DPropsAsRasterImage",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWrite3DPropsAsRasterImage();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Write3DPropsAsRasterImageOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Write3DPropsAsRasterImageOn();
      return 1;
      }
    }
  if (!strcmp("Write3DPropsAsRasterImageOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Write3DPropsAsRasterImageOff();
      return 1;
      }
    }
  if (!strcmp("SetTextAsPath",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTextAsPath(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTextAsPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetTextAsPath();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TextAsPathOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TextAsPathOn();
      return 1;
      }
    }
  if (!strcmp("TextAsPathOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TextAsPathOff();
      return 1;
      }
    }
  if (!strcmp("SetRasterExclusions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->SetRasterExclusions(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRasterExclusions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPropCollection  *temp20;
      {
      temp20 = (op)->GetRasterExclusions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPointSizeFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointSizeFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointSizeFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetPointSizeFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLineWidthFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLineWidthFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLineWidthFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetLineWidthFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkExporter";
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
  vtkmsg << "Object type: vtkGL2PSExporter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGL2PSExporter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGL2PSExporter", vtkGL2PSExporterClientServerNewCommand);
    csi->AddCommandFunction("vtkGL2PSExporter", vtkGL2PSExporterCommand);
    }
}
