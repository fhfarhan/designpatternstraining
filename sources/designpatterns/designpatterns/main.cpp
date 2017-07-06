// designpatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "monitorlock.h"
#include "logger.h"
#include "vehiclefactory.h"
#include "registrationauthority.h"
#include "walkmandevice.h"
#include "homeautomationfacade.h"
#include "weatherbroadcast.h"
#include "weatherreport.h"


using namespace DesignPattern;

//=======================================================================================
//#define ENABLE_MONITORLOCK_DP_DEMO
#define ENABLE_SINGLETON_DP_DEMO
#define ENABLE_SINGLETON_DCLI_DP_DEMO
//#define ENABLE_FACTORY_DP_DEMO
//#define ENABLE_ADAPTER_DP_DEMO
//#define ENABLE_FACADE_DP_DEMO
//#define ENABLE_OBSERVER_DP_DEMO

//=======================================================================================
void LineBreak()
{
  printf("\n");
  printf("\n**==============================================================**");
}
//=======================================================================================
void MonitorLock_DesignPattern_Driver()
{
  CMutex MutexLock;
  CMonitorLock MonitorLock(MutexLock);
}
//=======================================================================================
void Singleton_DesignPattern_Driver()
{
  //Multi-Thread UN-SAFE Version
  CLogger& AppLogger1 = CLogger::Instance(); //Multi-Thread UN-SAFE
  AppLogger1.SetLogLevel(DesignPattern::LogLevel::VERBOSE);
  printf("\n***Logger-Singleton-Instance Memory-Address=%x***", &AppLogger1);

  //Multi-Thread SAFE Version but incur Un-nessary Thread Blocking Version
  CLogger& AppLogger2 = CLogger::Instance_MTSafe_V1();
  printf("\n***Logger-Singleton-Instance Memory-Address=%x***", &AppLogger2);
  
  //Multi-Thread SAFE Version but incur Un-nessary Thread Blocking Version used Monitor Lock
  CLogger& AppLogger4 = CLogger::Instance_MTSafe_V3();
  printf("\n***Logger-Singleton-Instance Memory-Address=%x***", &AppLogger4);

  /*CLogger *pLogger = &AppLogger4;
  delete pLogger;*/
}
//=======================================================================================
void DoubleCheck_LazyInitialzation_DesignPattern_Driver()
{
  //Multi-Thread SAFE Version Double Check Lazy Initialzation
  CLogger& AppLogger3 = CLogger::Instance_MTSafe_V2();
  printf("\n***Logger-Singleton-Instance Memory-Address=%x***", &AppLogger3); 

  //Multi-Thread SAFE Version Double Check Lazy Initialzation with Monitor Lock
  CLogger& AppLogger5 = CLogger::Instance_MTSafe_V4();
  printf("\n***Logger-Singleton-Instance Memory-Address=%x***", &AppLogger5);
  AppLogger5.SetLogLevel(LogLevel::VERBOSE);
}
//=======================================================================================
void Factory_DesignPattern_Driver()
{
  CRegistrationAuthority RegAuth;
  VehicleSpecification VSpecCar = {VehicleType::CAR,VehicleCategory::LTV,VehicleColor::SILVER,1500};
  IAutoMobile *pCar = CVehicleFactory::GetVehicle(VSpecCar);
  if (pCar)
  {
    RegAuth.RegisterationProcess(pCar);
    delete pCar;
    pCar = NULL;
  }
  

  VehicleSpecification VSpecJeep = { VehicleType::JEEP, VehicleCategory::LTV, VehicleColor::BLACK, 2000 };
  IAutoMobile *pJeep = CVehicleFactory::GetVehicle(VSpecJeep);
  if (pJeep)
  {
    RegAuth.RegisterationProcess(pJeep);
    delete pJeep;
    pJeep = NULL;
  }
  

  VehicleSpecification VSpecWagon = { VehicleType::WAGON, VehicleCategory::LTV, VehicleColor::WHITE, 1800 };
  IAutoMobile *pWagon = CVehicleFactory::GetVehicle(VSpecWagon);
  if (pWagon)
  {
    RegAuth.RegisterationProcess(pWagon);
    delete pWagon;
    pWagon = NULL;
  }
  

  VehicleSpecification VSpecBus = { VehicleType::BUS, VehicleCategory::HTV, VehicleColor::RED, 5000 };
  IAutoMobile *pBus = CVehicleFactory::GetVehicle(VSpecBus);
  if (pBus)
  {
    RegAuth.RegisterationProcess(pBus);
    delete pBus;
    pBus = NULL;
  }
  

  VehicleSpecification VSpecTruck = { VehicleType::TRUCK, VehicleCategory::HTV, VehicleColor::BLACK, 6000 };
  IAutoMobile *pTruck = CVehicleFactory::GetVehicle(VSpecTruck);
  if (pTruck)
  {
    RegAuth.RegisterationProcess(pTruck);
    delete pTruck;
    pTruck = NULL;
  }
  
}
//=======================================================================================
void Adapter_DesignPattern_Driver()
{
  CDCAdapter DCAdapter;
  CWalkmanDevice WalkmanDevice(&DCAdapter);
  WalkmanDevice.PowerOnDevice();
  WalkmanDevice.PlayMusic();

}
//=======================================================================================
void Facade_DesignPattern_Driver()
{
  CHomeAutomationFacade HAFacade;
  HAFacade.StepOut();
  HAFacade.StepIn();
}
//=======================================================================================
void Observer_DesignPattern_Driver()
{
  CWeatherBroadcastService WeatherService("Intelli-Cast-Weather-Radar");

  CWeatherReportStation *pBBCWeather = new CWeatherReportStation("BBC-Weather", WeatherService);  
  WeatherService.WeatherRadarUpdate(72, 84, 101325);
  CWeatherReportStation *pAccuWeather = new CWeatherReportStation("ACCU-Weather", WeatherService); 
  WeatherService.WeatherRadarUpdate(70, 80, 101325);
  CWeatherReportStation *pWeatherZone = new CWeatherReportStation("Weather-Zone", WeatherService);  
  WeatherService.WeatherRadarUpdate(72, 84, 101325);

}
//=======================================================================================

int _tmain(int argc, _TCHAR* argv[])
{  
  //=====================================================================================
#ifdef ENABLE_MONITORLOCK_DP_DEMO
  {
    MonitorLock_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_MONITORLOCK_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_SINGLETON_DP_DEMO
  {
    Singleton_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_SINGLETON_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_SINGLETON_DCLI_DP_DEMO
  {
    DoubleCheck_LazyInitialzation_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_SINGLETON_DCLI_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_FACTORY_DP_DEMO
  {
    Factory_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_FACTORY_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_ADAPTER_DP_DEMO
  {
    Adapter_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_ADAPTER_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_FACADE_DP_DEMO
  {
    Facade_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_FACADE_DP_DEMO
  //=====================================================================================
#ifdef ENABLE_OBSERVER_DP_DEMO
  {
    Observer_DesignPattern_Driver();
  }
  LineBreak();
#endif //ENABLE_OBSERVER_DP_DEMO
  //=====================================================================================
  
	return 0;
}

