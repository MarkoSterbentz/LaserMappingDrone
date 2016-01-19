// ClientServer wrapper for vtkSMAnimationScene object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMAnimationScene.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMAnimationSceneClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMAnimationScene::New();
}


int VTK_EXPORT vtkSMAnimationSceneCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMAnimationScene *op = vtkSMAnimationScene::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMAnimationScene.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMAnimationScene  *temp20;
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
    vtkSMAnimationScene  *temp20;
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
    vtkSMAnimationScene  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddCue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAnimationCue  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAnimationCue"))
      {
      op->AddCue(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveCue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAnimationCue  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAnimationCue"))
      {
      op->RemoveCue(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllCues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllCues();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfCues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfCues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddViewProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMViewProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMViewProxy"))
      {
      op->AddViewProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveViewProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMViewProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMViewProxy"))
      {
      op->RemoveViewProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllViewProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllViewProxies();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfViewProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfViewProxies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetViewProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMViewProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetViewProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCaching",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCaching(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCaching",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetCaching();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimeKeeper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->SetTimeKeeper(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimeKeeper",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxy  *temp20;
      {
      temp20 = (op)->GetTimeKeeper();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLockStartTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLockStartTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLockStartTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLockStartTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LockStartTimeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockStartTimeOn();
      return 1;
      }
    }
  if (!strcmp("LockStartTimeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockStartTimeOff();
      return 1;
      }
    }
  if (!strcmp("SetLockEndTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLockEndTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLockEndTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLockEndTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LockEndTimeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockEndTimeOn();
      return 1;
      }
    }
  if (!strcmp("LockEndTimeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockEndTimeOff();
      return 1;
      }
    }
  if (!strcmp("SetSceneTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSceneTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSceneTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetSceneTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlaybackTimeWindow",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPlaybackTimeWindow(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetPlaybackTimeWindow",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetPlaybackTimeWindow(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPlaybackTimeWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetPlaybackTimeWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLoop",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLoop(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLoop",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLoop();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Play",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Play();
      return 1;
      }
    }
  if (!strcmp("Stop",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Stop();
      return 1;
      }
    }
  if (!strcmp("GoToNext",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GoToNext();
      return 1;
      }
    }
  if (!strcmp("GoToPrevious",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GoToPrevious();
      return 1;
      }
    }
  if (!strcmp("GoToFirst",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GoToFirst();
      return 1;
      }
    }
  if (!strcmp("GoToLast",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GoToLast();
      return 1;
      }
    }
  if (!strcmp("SetPlayMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPlayMode(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDuration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDuration(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFramesPerTimestep",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFramesPerTimestep(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkAnimationCue";
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
  vtkmsg << "Object type: vtkSMAnimationScene, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMAnimationScene_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMAnimationScene", vtkSMAnimationSceneClientServerNewCommand);
    csi->AddCommandFunction("vtkSMAnimationScene", vtkSMAnimationSceneCommand);
    }
}
