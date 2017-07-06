#include "homeautomationfacade.h"
#include "logger.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //========================================================================= 
  CHomeAutomationFacade::CHomeAutomationFacade()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::CHomeAutomationFacade() Constructor Invoked***", LogLevel::INFO);
  }
  bool CHomeAutomationFacade::StepIn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepIn() Invoked***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepIn() [WELCOME-BACK]***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepIn() Home-Presense Sensed--Activating Sub-Systems***", LogLevel::INFO);
    m_AlarmSensor.TurnOff();
    m_AnsweringMachine.AutoAnswerOff();
    m_AnsweringMachine.PlayMessageOff();
    m_AnsweringMachine.RecordMessageOff();
    m_RemoteSurveillance.TurnOff();
    m_LightController.SwitchOnLights();
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepIn() Sub-Systems Re-Adjusted***", LogLevel::INFO);
    return true;
  }
  bool CHomeAutomationFacade::StepOut()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepOut() Invoked***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepOut() [GOOD-BYE]***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepOut() Home-Absense Sensed--Activating Sub-Systems***", LogLevel::INFO);
    m_AlarmSensor.TurnOn();
    m_AnsweringMachine.AutoAnswerOn();
    m_AnsweringMachine.PlayMessageOn();
    m_AnsweringMachine.RecordMessageOn();
    m_RemoteSurveillance.TurnOn();
    m_LightController.SwitchOffLights();
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::StepOut() Sub-Systems Re-Adjusted***", LogLevel::INFO);
    return true;
  }

  CHomeAutomationFacade::~CHomeAutomationFacade()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CHomeAutomationFacade::~CHomeAutomationFacade() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern