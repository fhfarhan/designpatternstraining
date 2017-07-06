#ifndef __REMOTE__SURVEILLANCE__H__
#define __REMOTE__SURVEILLANCE__H__


namespace DesignPattern
{
  //=========================================================================
  class CRemoteSurveillance
  {
  public:
    CRemoteSurveillance();
    virtual bool TurnOn();
    virtual bool TurnOff();
    virtual ~CRemoteSurveillance();
  private:
    bool m_SensorOn;
  };

} //namespace DesignPattern

#endif //__REMOTE__SURVEILLANCE__H__