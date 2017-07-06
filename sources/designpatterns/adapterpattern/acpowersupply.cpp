#include "acpowersupply.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================
  //Adaptee Implementation : An implementation that needs adapting.

  CACPowerSupply::CACPowerSupply()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CACPowerSupply::CACPowerSupply() Constructor Invoked***", LogLevel::INFO);
  }
  int CACPowerSupply::ConnectACInput()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CACPowerSupply::ConnectACInput() Invoked***", LogLevel::INFO);
    return ACVoltageMeasure();
  }
  int CACPowerSupply::ACVoltageMeasure()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CACPowerSupply::ACVoltageMeasure() Invoked***", LogLevel::INFO);
    return STANDARD_AC_VOLTAGE;
  }
  int CACPowerSupply::ACCurrentMeasure()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CACPowerSupply::ACCurrentMeasure() Invoked***", LogLevel::INFO);
    return (ACVoltageMeasure() / STANDARD_COPPER_RESISTANCE);
  }

  CACPowerSupply::~CACPowerSupply()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CACPowerSupply::~CACPowerSupply() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern