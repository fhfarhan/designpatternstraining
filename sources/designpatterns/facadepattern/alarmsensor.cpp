#include "alarmsensor.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================

  CAlarmSensor::CAlarmSensor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAlarmSensor::CAlarmSensor() Constructor Invoked***", LogLevel::INFO);
    m_SensorOn = false;
  }
  bool CAlarmSensor::TurnOn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAlarmSensor::TurnOn() Constructor Invoked***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CAlarmSensor::TurnOn() Security Alarm Sensor Truned On***", LogLevel::INFO);
    m_SensorOn = true;
    return true;
  }
  bool CAlarmSensor::TurnOff()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAlarmSensor::TurnOn() Security Alarm Sensor Truned Off***", LogLevel::INFO);
    m_SensorOn = true;
    m_SensorOn = false;
    return true;
  }

  CAlarmSensor::~CAlarmSensor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAlarmSensor::~CAlarmSensor() Destructor Invoked***", LogLevel::INFO);
  }
} //namespace DesignPattern

