#include "dcadaptor.h"
#include "logger.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //=========================================================================
  //Concrete Adapter : The class that implements the ITarget interface in terms of the Adaptee
  CDCAdapter::CDCAdapter()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::CDCAdapter() Constructor Invoked***", LogLevel::INFO);
  }
  int CDCAdapter::ConnectDCInput()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::ConnectDCInput() Invoked***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::ConnectDCInput() Ready to Start Rectification-Process***", LogLevel::INFO);
    return CDCAdapter::RectificationProcess(ConnectACInput());
  }
  int CDCAdapter::DCVoltageMeasure()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::DCVoltageMeasure() Invoked***", LogLevel::INFO);
    return SUPPORTED_DC_VOLTAGE;
  }
  int CDCAdapter::DCCurrentMeasure()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::DCCurrentMeasure() Invoked***", LogLevel::INFO);
    return (DCVoltageMeasure() / STANDARD_RESISTANCE);
  }
  int CDCAdapter::RectificationProcess(int ACVolts)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::RectificationProcess() Invoked***", LogLevel::INFO);
    int amperes = ACCurrentMeasure();
    return DCVoltageMeasure();
  }
  CDCAdapter::~CDCAdapter()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CDCAdapter::~CDCAdapter() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern
