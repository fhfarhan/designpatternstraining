#include "weatherbroadcast.h"
#include "logger.h"

namespace DesignPattern
{
  CWeatherBroadcastService::CWeatherBroadcastService(const std::string& ServiceName)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::CWeatherBroadcastService() Constructor Invoked***", LogLevel::INFO);
    m_Humidity = 0;
    m_Temperature = 0;
    m_Pressure = 0;
    m_ServiceName = "Weather-BroadCast-Service:";
    m_ServiceName.append(ServiceName);
  }
  std::string CWeatherBroadcastService::GetServiceInfo()
  {
    return m_ServiceName;
  }
  void CWeatherBroadcastService::WeatherRadarUpdate(double Humidity, double Temperature, double Pressure)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::WeatherUpdate() Invoked***", LogLevel::INFO);
    m_Humidity = Humidity;
    m_Temperature = Temperature;
    m_Pressure = Pressure;
	NotifyObservers();
  }
  bool CWeatherBroadcastService::Subscribe(IObserver *pObserver)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::Subscribe() Invoked***", LogLevel::INFO);
    m_ObserverList.push_back(pObserver);
    return true;
  }

  bool CWeatherBroadcastService::UnSubscribe(IObserver *pObserver)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::UnSubscribe() Invoked***", LogLevel::INFO);
    m_ObserverList.remove(pObserver);
    return true;
  }

  void CWeatherBroadcastService::NotifyObservers()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::Notify() Broadcasting....***", LogLevel::INFO);
    std::list<IObserver*>::iterator pos = m_ObserverList.begin();
    while (pos != m_ObserverList.end())
    {
      ((IObserver*)(*pos))->Notify(m_Humidity, m_Temperature, m_Pressure);      
      ++pos;
    }
  }

  CWeatherBroadcastService::~CWeatherBroadcastService()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherBroadcastService::~CWeatherBroadcastService() Destructor Invoked***", LogLevel::INFO);
    std::list<IObserver*>::iterator pos = m_ObserverList.begin();
    IObserver *pObs;
    while (pos != m_ObserverList.end())
    {
      pObs = NULL;
      pObs = ((IObserver*)(*pos));      
      ++pos;
      delete pObs;
    }
    m_ObserverList.clear();
  }

} //namespace DesignPattern