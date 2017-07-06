#ifndef __ACPOWER__SUPPLY__H__
#define __ACPOWER__SUPPLY__H__

#define AC_POWER_PLUGGEDIN_OK 0
#define STANDARD_AC_VOLTAGE 240
#define STANDARD_COPPER_RESISTANCE 11

#include "acpower.h"

namespace DesignPattern
{
  //=========================================================================
  //Adaptee Implementation : An implementation that needs adapting.
  class CACPowerSupply : public IACPower
  {

  public:
    CACPowerSupply();    
    virtual int ConnectACInput();    
    virtual int ACVoltageMeasure();    
    virtual int ACCurrentMeasure();
    virtual ~CACPowerSupply();

  }; //class CACPowerSupply

} //namespace DesignPattern

#endif //__ACPOWER__SUPPLY__H__