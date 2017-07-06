#ifndef __DCPOWER__H__
#define __DCPOWER__H__


namespace DesignPattern
{
  //=========================================================================
  //Target Interface : The interface that the Client wants to use.
  struct IDCPower
  {
    virtual int ConnectDCInput() = 0;
    virtual int DCVoltageMeasure() = 0;
    virtual int DCCurrentMeasure() = 0;
  }; //struct IDCPower  

} //namespace DesignPattern

#endif //__DCPOWER__H__