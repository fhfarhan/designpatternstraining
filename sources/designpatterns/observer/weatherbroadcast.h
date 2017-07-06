#ifndef __WEATHERBROADCAST__H__
#define __WEATHERBROADCAST__H__

#include <list>
#include <string>
#include "notifier.h"

namespace DesignPattern
{
  //=========================================================================	
  class CWeatherBroadcastService : public INotifier
  {
  public:
    CWeatherBroadcastService(const std::string& ServiceName);
    std::string GetServiceInfo();
    void WeatherRadarUpdate(double Humidity, double Temperature, double Pressure);
    virtual bool Subscribe(IObserver *pObserver);
    virtual bool UnSubscribe(IObserver *pObserver);
    virtual ~CWeatherBroadcastService();
  protected:
    virtual void NotifyObservers();
  private:
    double m_Humidity;
    double m_Temperature;
    double m_Pressure;
    std::string m_ServiceName;
    std::list<IObserver* > m_ObserverList;
  };

} //namespace DesignPattern

#endif //__WEATHERBROADCAST__H__