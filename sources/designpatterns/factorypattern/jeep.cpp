#include "jeep.h"
#include "logger.h"

namespace DesignPattern
{
  //========================================================================= 
  CJeep::CJeep(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::CJeep() Constructor Invoked***", LogLevel::INFO);
    m_VehicleType = VehicleType::JEEP;
    m_VehicleCategory = VSpecs.Category;
    m_VehicleColor = VSpecs.Color;
    m_EngineCC = VSpecs.EngineDisplacement;
    m_fRegistered = false;
  }
  bool CJeep::Register(const std::string& RegistrationNumber)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::Register() Vehicle Registered***", LogLevel::INFO);
    m_RegistrationNumber = RegistrationNumber;
    m_fRegistered = true;
    return true;
  }
  VehicleType CJeep::GetType()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::GetType() Invoked***", LogLevel::INFO);
    return m_VehicleType;
  }
  VehicleCategory CJeep::GetCategory()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::GetCategory() Invoked***", LogLevel::INFO);
    return m_VehicleCategory;
  }
  int CJeep::GetEngineDisplacement()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::GetEngineDisplacement() Invoked***", LogLevel::INFO);
    return m_EngineCC;
  }
  VehicleColor CJeep::GetColor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::GetColor() Invoked***", LogLevel::INFO);
    return m_VehicleColor;
  }
  CJeep::~CJeep()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CJeep::~CJeep() Destructor Invoked***", LogLevel::INFO);
  }
} //namespace DesignPattern