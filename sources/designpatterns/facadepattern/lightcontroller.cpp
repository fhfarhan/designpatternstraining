#include "lightcontroller.h"
#include "logger.h"

namespace DesignPattern
{
  //========================================================================= 
  CLightController::CLightController()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CLightController::CLightController() Constructor Invoked***", LogLevel::INFO);
    m_fLightsOn = false;
  }
  bool CLightController::SwitchOnLights()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CLightController::SwitchOnLights() Lights Turned ON***", LogLevel::INFO);
    m_fLightsOn = true;
    return true;
  }
  bool CLightController::SwitchOffLights()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CLightController::SwitchOffLights() Lights Turned OFF***", LogLevel::INFO);
    m_fLightsOn = false;
    return true;
  }

  CLightController::~CLightController()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CLightController::~CLightController() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern