#ifndef __HOME__AUTOMATION__FACADE__H__
#define __HOME__AUTOMATION__FACADE__H__

#include "alarmsensor.h"
#include "remotesurveillance.h"
#include "answeringmachine.h"
#include "lightcontroller.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //=========================================================================
  class CHomeAutomationFacade
  {
  public:
    CHomeAutomationFacade();
    virtual bool StepIn();
    virtual bool StepOut();
    virtual ~CHomeAutomationFacade();
  private:
    CAlarmSensor m_AlarmSensor;
    CAnsweringMachine m_AnsweringMachine;
    CRemoteSurveillance m_RemoteSurveillance;
    CLightController m_LightController;
  };

} //namespace DesignPattern

#endif //__HOME__AUTOMATION__FACADE__H__