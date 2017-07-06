#include "weatherreport.h"
#include "logger.h"
//Category:Behavioral Design Patter
namespace DesignPattern
{
  //=========================================================================	

  CWeatherReportStation::CWeatherReportStation(const std::string& Name,CWeatherBroadcastService& WeatherService) :
    m_ReportingStationName(Name), m_WeatherService(WeatherService)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherReportStation::CWeatherReportStation() Constructor Invoked***", LogLevel::INFO);   
    m_WeatherService.Subscribe(this);
    std::string LogInfo;
    GetInfo("***CWeatherReportStation::CWeatherReportStation()", "Subscribed with ",LogInfo);
    CLogger::Instance_MTSafe_V4().LogMessage(LogInfo, LogLevel::INFO);

  }
  void CWeatherReportStation::Notify(double Humidity, double Temperature, double Pressure)
  {
    m_Humidity = Humidity;
    m_Temperature = Temperature;
    m_Pressure = Pressure;
    std::string LogInfo;
    GetInfo("***CWeatherReportStation::Update()", "Updated by ", LogInfo);
	LogInfo.append(std::string("-:-Humidity:") + std::to_string(m_Humidity) +
		std::string("-:-Temperature:") + std::to_string(m_Temperature) + 
		std::string("C-:-Air-Pressure:") + std::to_string(m_Pressure));
    CLogger::Instance_MTSafe_V4().LogMessage(LogInfo, LogLevel::INFO);
  }
  void CWeatherReportStation::GetInfo(const std::string& Header, const std::string& Operation, std::string& StationInfo)
  {
    StationInfo.clear();    
    char tmpbuff[512];
    memset(tmpbuff, '\0', sizeof(tmpbuff));
    sprintf(tmpbuff, "***%s Weather-Report-Station:-%s  %s  Weather-Service:-%s***",
      Header.c_str(), m_ReportingStationName.c_str(), Operation.c_str(), m_WeatherService.GetServiceInfo().c_str());
    StationInfo.append(tmpbuff);

  }
  CWeatherReportStation::~CWeatherReportStation()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWeatherReportStation::~CWeatherReportStation() Destructor Invoked***", LogLevel::INFO);
    m_WeatherService.UnSubscribe(this);
    std::string LogInfo;
    GetInfo("***CWeatherReportStation::CWeatherReportStation()", "Un-Subscribed ", LogInfo);
  }

} //namespace DesignPattern