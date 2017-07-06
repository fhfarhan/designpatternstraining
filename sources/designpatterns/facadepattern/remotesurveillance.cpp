#include "remotesurveillance.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================
  CRemoteSurveillance::CRemoteSurveillance()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRemoteSurveillance::CRemoteSurveillance() Constructor Invoked***", LogLevel::INFO);
    m_SensorOn = false;
  }

  bool CRemoteSurveillance::TurnOn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRemoteSurveillance::TurnOn() Remote-Surveillance Sensor Set ON***", LogLevel::INFO);
    m_SensorOn = true;
    return true;
  }

  bool CRemoteSurveillance::TurnOff()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRemoteSurveillance::TurnOn() Remote-Surveillance Sensor Set OFF***", LogLevel::INFO);
    m_SensorOn = false;
    return true;
  }

  CRemoteSurveillance::~CRemoteSurveillance()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRemoteSurveillance::~CRemoteSurveillance() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern

