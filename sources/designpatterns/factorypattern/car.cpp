#include "car.h"
#include "logger.h"

#include "automobile.h"

namespace DesignPattern
{
  //========================================================================= 
  CCar::CCar(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::CCar() Constructor Invoked***", LogLevel::INFO);
    m_VehicleType = VehicleType::CAR;
    m_VehicleCategory = VSpecs.Category;
    m_VehicleColor = VSpecs.Color;
    m_EngineCC = VSpecs.EngineDisplacement;
    m_fRegistered = false;
  }
  bool CCar::Register(const std::string& RegistrationNumber)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::Register() Vehicle Registered***", LogLevel::INFO);
    m_RegistrationNumber = RegistrationNumber;
    m_fRegistered = true;
    return true;
  }
  VehicleType CCar::GetType()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::GetType() Invoked***", LogLevel::INFO);
    return m_VehicleType;
  }
  VehicleCategory CCar::GetCategory()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::GetCategory() Invoked***", LogLevel::INFO);
    return m_VehicleCategory;
  }
  int CCar::GetEngineDisplacement()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::GetEngineDisplacement() Invoked***", LogLevel::INFO);
    return m_EngineCC;
  }
  VehicleColor CCar::GetColor()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::GetColor() Invoked***", LogLevel::INFO);
    return m_VehicleColor;
  }
  CCar::~CCar()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CCar::~CCar() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern