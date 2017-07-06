#include "walkmandevice.h"
#include "walkmandevice.h"
#include "logger.h"

namespace DesignPattern
{
  CWalkmanDevice::CWalkmanDevice(CDCAdapter *pDCAdapter)
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWalkmanDevice::CWalkmanDevice() Constructor Invoked***", LogLevel::INFO);
    m_pDCAdapter = pDCAdapter;
  }
  int CWalkmanDevice::PowerOnDevice()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWalkmanDevice::PowerOnDevice() Invoked***", LogLevel::INFO);
    CLogger::Instance_MTSafe_V4().LogMessage("***CWalkmanDevice::PowerOnDevice() Connecting DC-Capable Device with AC-Power Supply using DC-Adapter***", LogLevel::INFO);
    int DCVoltMeasures = m_pDCAdapter->ConnectDCInput();	
	m_pDCAdapter->DCCurrentMeasure();
	return DCVoltMeasures;
  }
  int CWalkmanDevice::PlayMusic()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWalkmanDevice::PlayMusic(S A R A GA MA PAAAA) Invoked***", LogLevel::INFO);
    return PLAY_OK;
  }
  CWalkmanDevice::~CWalkmanDevice()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CWalkmanDevice::~CWalkmanDevice() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern

