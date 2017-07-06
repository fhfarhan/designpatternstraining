#ifndef __CAR__H__
#define __CAR__H__

#include "automobile.h"

namespace DesignPattern
{
  //=========================================================================
  class CCar:public IAutoMobile
  {
  public:
    CCar(const VehicleSpecification& VSpecs);    
    virtual bool Register(const std::string& RegistrationNumber);
    virtual VehicleType GetType();    
    virtual VehicleCategory GetCategory();    
    virtual int GetEngineDisplacement();    
    virtual VehicleColor GetColor();    
    virtual ~CCar();    
  private:
    VehicleType m_VehicleType;
    int m_EngineCC;
    VehicleCategory m_VehicleCategory;
    VehicleColor m_VehicleColor;
    bool m_fRegistered;
    std::string m_RegistrationNumber;
  };

} //namespace DesignPattern

#endif //__CAR__H__