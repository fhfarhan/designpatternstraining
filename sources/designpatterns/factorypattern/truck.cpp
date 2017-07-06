#include "truck.h"
#include "logger.h"

namespace DesignPattern
{
  //========================================================================= 
  CTruck::CTruck(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::CTruck() Constructor Invoked***", LogLevel::INFO);
    m_VehicleType = VehicleType::TRUCK;
    m_VehicleCategory = VSpecs.Category;
    m_VehicleColor = VSpecs.Color;
    m_EngineCC = VSpecs.EngineDisplacement;
    m_fRegistered = false;
  }
  bool CTruck::Register(const std::string& RegistrationNumber)
  {    
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::Register() Vehicle Registered***", LogLevel::INFO);
    m_RegistrationNumber = RegistrationNumber;
    m_fRegistered = true;
    return true;
  }
  VehicleType CTruck::GetType()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::GetType() Invoked***", LogLevel::INFO);
    return m_VehicleType;
  }
  VehicleCategory CTruck::GetCategory()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::GetCategory() Invoked***", LogLevel::INFO);
    return m_VehicleCategory;
  }
  int CTruck::GetEngineDisplacement()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::GetEngineDisplacement() Invoked***", LogLevel::INFO);
    return m_EngineCC;
  }
  VehicleColor CTruck::GetColor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::GetColor() Invoked***", LogLevel::INFO);
    return m_VehicleColor;
  }
  CTruck::~CTruck()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CTruck::~CTruck() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern