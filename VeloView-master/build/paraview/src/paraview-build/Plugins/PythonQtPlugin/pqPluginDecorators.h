
#ifndef __pqPluginDecorators_h
#define __pqPluginDecorators_h

#include <QObject>
#include "PythonQt.h"


#include "pqApplicationCore.h"
#include "pqLoadDataReaction.h"
#include "pqPVApplicationCore.h"
#include "pqPipelineSource.h"
#include "pqProxy.h"
#include "pqPythonDialog.h"
#include "pqPythonEventFilter.h"
#include "pqPythonManager.h"
#include "pqPythonQtMethodHelpers.h"
#include "pqRenderView.h"
#include "pqRenderViewBase.h"
#include "pqServer.h"
#include "pqServerManagerModel.h"
#include "pqSettings.h"
#include "pqTimeKeeper.h"

class  pqPluginDecorators : public QObject
{
  Q_OBJECT

public:

  pqPluginDecorators(QObject* parent=0) : QObject(parent)
    {
    this->registerClassForPythonQt(&pqApplicationCore::staticMetaObject);
    this->registerClassForPythonQt(&pqLoadDataReaction::staticMetaObject);
    this->registerClassForPythonQt(&pqPVApplicationCore::staticMetaObject);
    this->registerClassForPythonQt(&pqPipelineSource::staticMetaObject);
    this->registerClassForPythonQt(&pqProxy::staticMetaObject);
    this->registerClassForPythonQt(&pqPythonDialog::staticMetaObject);
    this->registerClassForPythonQt(&pqPythonEventFilter::staticMetaObject);
    this->registerClassForPythonQt(&pqPythonManager::staticMetaObject);
    this->registerClassForPythonQt(&pqPythonQtMethodHelpers::staticMetaObject);
    this->registerClassForPythonQt(&pqRenderView::staticMetaObject);
    this->registerClassForPythonQt(&pqRenderViewBase::staticMetaObject);
    this->registerClassForPythonQt(&pqServer::staticMetaObject);
    this->registerClassForPythonQt(&pqServerManagerModel::staticMetaObject);
    this->registerClassForPythonQt(&pqSettings::staticMetaObject);
    this->registerClassForPythonQt(&pqTimeKeeper::staticMetaObject);
    }

  inline void registerClassForPythonQt(const QMetaObject* metaobject)
    {
    PythonQt::self()->registerClass(metaobject, "paraview");
    }

public slots:


  QList<pqPipelineSource*> static_pqLoadDataReaction_loadData()
    {
    return pqLoadDataReaction::loadData();
    }


  pqApplicationCore* static_pqApplicationCore_instance()
    {
    return pqApplicationCore::instance();
    }


  pqPVApplicationCore* static_pqPVApplicationCore_instance()
    {
    return pqPVApplicationCore::instance();
    }


  pqSettings* settings(pqApplicationCore* inst)
    {
    return inst->settings();
    }


  pqPythonManager* pythonManager(pqPVApplicationCore* inst)
    {
    return inst->pythonManager();
    }


  pqPythonDialog* pythonShellDialog(pqPythonManager* inst)
    {
    return inst->pythonShellDialog();
    }


  pqServer* getActiveServer(pqApplicationCore* inst)
    {
    return inst->getActiveServer();
    }


  pqTimeKeeper* getTimeKeeper(pqServer* inst)
    {
    return inst->getTimeKeeper();
    }

  double getTime(pqTimeKeeper* inst)
    {
    return inst->getTime();
    }

  void setTime(pqTimeKeeper* inst, double arg0)
    {
    inst->setTime(arg0);
    }

  int getNumberOfTimeStepValues(pqTimeKeeper* inst)
    {
    return inst->getNumberOfTimeStepValues();
    }


  pqServerManagerModel* getServerManagerModel(pqApplicationCore* inst)
    {
    return inst->getServerManagerModel();
    }


  QWidget* getWidget(pqRenderViewBase* inst)
    {
    return inst->getWidget();
    }


  void resetCamera(pqRenderView* inst)
    {
    inst->resetCamera();
    }


  pqPythonEventFilter* new_pqPythonEventFilter()
    {
    return new pqPythonEventFilter();
    }

  void delete_pqPythonEventFilter(pqPythonEventFilter* inst)
    {
    delete inst;
    }



  pqProxy* static_pqPythonQtMethodHelpers_findProxyItem(pqServerManagerModel* arg0, vtkSMProxy* arg1)
    {
    return pqPythonQtMethodHelpers::findProxyItem(arg0, arg1);
    }


};

#endif