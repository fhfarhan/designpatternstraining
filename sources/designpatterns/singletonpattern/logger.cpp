#include "logger.h"
#include "monitorlock.h"

namespace DesignPattern
{
  CLogger* CLogger::pSelf_ = NULL;
  CMutex CLogger::MutexLock_;
  
  CLogger& CLogger::Instance()
  {
    if(pSelf_ == NULL)
    {
      pSelf_ = new CLogger();
    }

    return *pSelf_;  
  }

  CLogger& CLogger::Instance_MTSafe_V1()
  {
    MutexLock_.Lock();
    if(pSelf_ == NULL)
    {
      pSelf_ = new CLogger();
    }
    MutexLock_.Unlock();

    return *pSelf_;  
  }

  //Double Check Lazy-Initialization
  CLogger& CLogger::Instance_MTSafe_V2()
  {
    if(pSelf_ == NULL)
    {
      MutexLock_.Lock();
      if(pSelf_ == NULL)
      {
        pSelf_ = new CLogger();
      }
      MutexLock_.Unlock();
    }

    return *pSelf_;  
  }

    CLogger& CLogger::Instance_MTSafe_V3()
  {
    CMonitorLock monitorlock(MutexLock_);
    if(pSelf_ == NULL)
    {
      pSelf_ = new CLogger();
    }

    return *pSelf_;  
  }

  //Double Check Lazy-Initialization
  CLogger& CLogger::Instance_MTSafe_V4()
  {
    if(pSelf_ == NULL)
    {
      CMonitorLock monitorlock(MutexLock_);
      if(pSelf_ == NULL)
      {
        pSelf_ = new CLogger();
      }
    }

    return *pSelf_;  
  }

  CLogger::CLogger()
  {
    m_fThreaded = false;
    m_LogLevel = LogLevel::WARN;  
  }

  LogLevel CLogger::SetLogLevel(LogLevel logLevel)
  {
    LogLevel loglevel = m_LogLevel;
    m_LogLevel = logLevel;		
    return loglevel;	
  }

  LogLevel CLogger::GetLogLevel()
  {
    return m_LogLevel;
  }

  bool CLogger::LogMessage(const std::string& LogMsg, LogLevel loglevel, bool SyncMode)
  {
    if(loglevel >= m_LogLevel)
    {
      printf("\n%s",LogMsg.c_str());
    }

    return true;
  }

  CLogger::~CLogger()
  {
    if(pSelf_)
    {
      pSelf_ = NULL;
    }
  }

} //namespace DesignPattern