#include "wagon.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================

  CWagon::CWagon(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::CWagon() Constructor Invoked***", LogLevel::INFO);
    m_VehicleType = VehicleType::WAGON;
    m_VehicleCategory = VSpecs.Category;
    m_VehicleColor = VSpecs.Color;
    m_EngineCC = VSpecs.EngineDisplacement;
    m_fRegistered = false;
  }
  bool CWagon::Register(const std::string& RegistrationNumber)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::Register() Vehicle Registered***", LogLevel::INFO);
    m_RegistrationNumber = RegistrationNumber;
    m_fRegistered = true;
    return true;
  }
  VehicleType CWagon::GetType()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::GetType() Invoked***", LogLevel::INFO);
    return m_VehicleType;
  }
  VehicleCategory CWagon::GetCategory()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::GetCategory() Invoked***", LogLevel::INFO);
    return m_VehicleCategory;
  }
  int CWagon::GetEngineDisplacement()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::GetEngineDisplacement() Invoked***", LogLevel::INFO);
    return m_EngineCC;
  }
  VehicleColor CWagon::GetColor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::GetColor() Invoked***", LogLevel::INFO);
    return m_VehicleColor;
  }
  CWagon::~CWagon()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWagon::~CWagon() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern