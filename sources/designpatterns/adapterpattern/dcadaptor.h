#ifndef __DC__ADAPTER__H__
#define __DC__ADAPTER__H__

#define DC_POWER_PLUGGEDIN_OK 0
#define RECTIFICATION_OK 0
#define SUPPORTED_DC_VOLTAGE 12
#define STANDARD_RESISTANCE 4

#include "dcpower.h"
#include "acpowersupply.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //=========================================================================
  //Concrete Adapter : The class that implements the ITarget interface in terms of the Adaptee
  class CDCAdapter : public IDCPower, private CACPowerSupply
  {

  public:
    CDCAdapter();
    virtual int ConnectDCInput();
    virtual int DCVoltageMeasure();
    virtual int DCCurrentMeasure();
    virtual ~CDCAdapter();
  protected:
    virtual int RectificationProcess(int ACVolts);

  }; //class CDCAdapter

} //namespace DesignPattern

#endif //__DC__ADAPTER__H__