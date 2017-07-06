#ifndef __ACPOWER__H__
#define __ACPOWER__H__

namespace DesignPattern
{
  //=========================================================================
  //Adaptee Interface
  struct IACPower
  {
    virtual int ConnectACInput() = 0;
    virtual int ACVoltageMeasure() = 0;
    virtual int ACCurrentMeasure() = 0;
  }; //struct IACPower

} //namespace DesignPattern

#endif //__ACPOWER__H__