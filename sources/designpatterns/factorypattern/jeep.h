#ifndef __JEEP__H__
#define __JEEP__H__

#include "automobile.h"

namespace DesignPattern
{
  //=========================================================================
  class CJeep :public IAutoMobile
  {
  public:
    CJeep(const VehicleSpecification& VSpecs);
    virtual bool Register(const std::string& RegistrationNumber);
    virtual VehicleType GetType();
    virtual VehicleCategory GetCategory();
    virtual int GetEngineDisplacement();
    virtual VehicleColor GetColor();
    virtual ~CJeep();

  private:
    VehicleType m_VehicleType;
    int m_EngineCC;
    VehicleCategory m_VehicleCategory;
    VehicleColor m_VehicleColor;
    bool m_fRegistered;
    std::string m_RegistrationNumber;
  };

} //namespace DesignPattern

#endif //__JEEP__H__