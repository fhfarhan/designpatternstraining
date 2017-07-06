#include "vehiclefactory.h"
#include "logger.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //=========================================================================

  IAutoMobile* CVehicleFactory::GetVehicle(const VehicleSpecification& VSpecs)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Invoked***", LogLevel::INFO);
    IAutoMobile *pAutoMobile = nullptr;
    switch (VSpecs.Type)
    {
    case VehicleType::CAR:
    {
                           CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Instantiating CAR***", LogLevel::INFO);
                           pAutoMobile = new CCar(VSpecs);
    }
      break;
    case VehicleType::JEEP:
    {
                            CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Instantiating JEEP***", LogLevel::INFO);
                            pAutoMobile = new CJeep(VSpecs);
    }
      break;
    case VehicleType::WAGON:
    {
                             CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Instantiating WAGON***", LogLevel::INFO);
                             pAutoMobile = new CWagon(VSpecs);
    }
      break;
    case VehicleType::BUS:
    {
                           CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Instantiating BUS***", LogLevel::INFO);
                           pAutoMobile = new CBus(VSpecs);
    }
      break;
    case VehicleType::TRUCK:
    {
                             CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() Instantiating TRUK***", LogLevel::INFO);
                             pAutoMobile = new CTruck(VSpecs);
    }
      break;

    default:
      CLogger::Instance_MTSafe_V4().LogMessage("***CVehicleFactory::GetVehicle() UN-Supported Vechicle Request Ignored***", LogLevel::INFO);
      break;
    }
    return pAutoMobile;
  }

} //namespace DesignPattern