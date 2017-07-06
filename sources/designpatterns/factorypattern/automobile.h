#ifndef __AUTOMOBILE__H__
#define __AUTOMOBILE__H__

#include <string>

namespace DesignPattern
{
  //=========================================================================
  typedef enum
  {				
    CAR = 0,
    JEEP = 1,
    WAGON = 2,
    BUS = 3,
    TRUCK = 4
  }VehicleType;
  //=========================================================================
  typedef enum
  {				
    LTV = 0,
    HTV = 1    
  }VehicleCategory;
  //=========================================================================
  typedef enum
  {				
    WHITE = 0,
    BLACK = 1,
    RED = 2,
    SILVER = 3
  }VehicleColor;
  //=========================================================================
  typedef struct 
  {
    VehicleType Type;
    VehicleCategory Category;
    VehicleColor Color;
    int EngineDisplacement;
  
  }VehicleSpecification;
  //=========================================================================
  struct IAutoMobile
  {
    virtual bool Register(const std::string& RegistrationNumber) = 0;    
    virtual VehicleType GetType() = 0;
    virtual VehicleCategory GetCategory() = 0;
    virtual int GetEngineDisplacement() = 0;
    virtual VehicleColor GetColor() = 0;
  };

} //namespace DesignPattern

#endif //__AUTOMOBILE__H__