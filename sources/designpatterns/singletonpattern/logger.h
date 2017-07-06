#ifndef __LOGGER__H__
#define __LOGGER__H__

#include <string>
#include "mutex.h"

//Category:Creational Design Patter


namespace DesignPattern
{
  //=========================================================================
	typedef enum
	{				
		VERBOSE = 0,
		DEBUG__ = 1,
		INFO = 2,
		WARN = 3,
		ERROR__ = 4,
		CRITICAL = 5,
		FATAL = 6,
		INACTIVE = 7
	}LogLevel;	
  //=========================================================================
  class CLogger
  {

  public:
    static CLogger& Instance();
    static CLogger& Instance_MTSafe_V1();
    static CLogger& Instance_MTSafe_V2();
    static CLogger& Instance_MTSafe_V3();
    static CLogger& Instance_MTSafe_V4();
		LogLevel SetLogLevel(LogLevel logLevel);
		LogLevel GetLogLevel();
		virtual bool LogMessage(const std::string& LogMsg, LogLevel loglevel, bool SyncMode = true);
    virtual ~CLogger();

  private:
    //Constructor is locked for outer world
    CLogger();
    //Copy Constructor is locked for outer world
    CLogger(CLogger& CloneObj)
    {
      //This is just stub we're not letting the instance to be copied
    }
    //Assignment-operator is locked for outer world
    CLogger& operator=(CLogger& CloneObj)
    {
      //This is just stub we're not letting the instance to be copied
      return *this;
    }

		static CLogger* pSelf_;
    static CMutex MutexLock_;
		LogLevel m_LogLevel;		
		bool m_fThreaded;

  }; //class CLogger

} //namespace DesignPattern

#endif //__LOGGER__H__