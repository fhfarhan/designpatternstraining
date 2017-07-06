#include "bus.h"
#include "logger.h"

namespace DesignPattern
{
  //========================================================================= 
  CBus::CBus(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::CBus() Constructor Invoked***", LogLevel::INFO);
    m_VehicleType = VehicleType::BUS;
    m_VehicleCategory = VSpecs.Category;
    m_VehicleColor = VSpecs.Color;
    m_EngineCC = VSpecs.EngineDisplacement;
    m_fRegistered = false;
  }
  bool CBus::Register(const std::string& RegistrationNumber)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::Register() Vehicle Registered***", LogLevel::INFO);
    m_RegistrationNumber = RegistrationNumber;
    m_fRegistered = true;
    return true;
  }
  VehicleType CBus::GetType()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::GetType() Invoked***", LogLevel::INFO);
    return m_VehicleType;
  }
  VehicleCategory CBus::GetCategory()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::GetCategory() Invoked***", LogLevel::INFO);
    return m_VehicleCategory;
  }
  int CBus::GetEngineDisplacement()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::GetEngineDisplacement() Invoked***", LogLevel::INFO);
    return m_EngineCC;
  }
  VehicleColor CBus::GetColor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::GetColor() Invoked***", LogLevel::INFO);
    return m_VehicleColor;
  }
  CBus::~CBus()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CBus::~CBus() Destructor Invoked***", LogLevel::INFO);
  }
} //namespace DesignPattern