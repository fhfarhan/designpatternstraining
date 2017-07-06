#ifndef __WEATHERREPORT__H__
#define __WEATHERREPORT__H__

#include <list>
#include "weatherbroadcast.h"

//Category:Behavioral Design Patter
namespace DesignPattern
{
  //=========================================================================	
  class CWeatherReportStation : public IObserver
  {
  public:
    CWeatherReportStation(const std::string& Name,CWeatherBroadcastService& WeatherService);
    virtual void Notify(double Humidity, double Temperature, double Pressure);
    virtual ~CWeatherReportStation();
  protected:
    virtual void GetInfo(const std::string& Header, const std::string& Operation,std::string& StationInfo);
  private:
    double m_Humidity;
    double m_Temperature;
    double m_Pressure;
    CWeatherBroadcastService& m_WeatherService;
    std::string m_ReportingStationName;    
  };

} //namespace DesignPattern

#endif //__WEATHERREPORT__H__