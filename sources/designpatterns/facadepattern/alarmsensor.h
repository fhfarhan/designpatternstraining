#ifndef __ALARM__SENSOR__H__
#define __ALARM__SENSOR__H__


namespace DesignPattern
{
  //=========================================================================
  class CAlarmSensor
  {

  public:
    CAlarmSensor();
    virtual bool TurnOn();    
    virtual bool TurnOff();        
    virtual ~CAlarmSensor();
    
  private:    
    bool m_SensorOn;
  };

} //namespace DesignPattern

#endif //__ALARM__SENSOR__H__