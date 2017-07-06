#include "monitorlock.h"
#include "logger.h"
namespace DesignPattern
{
  CMonitorLock::CMonitorLock(CMutex& MutexLock):m_MutexLock(MutexLock)
  {
    printf("\n***CMonitorLock::CMonitorLock() Constructor Invoked***", LogLevel::INFO);
    m_MutexLock.Lock();
    printf("\n***CMonitorLock::CMonitorLock() Get Locked***", LogLevel::INFO);
  }

  CMonitorLock::~CMonitorLock()
  {
    printf("***\nCMonitorLock::~CMonitorLock() Destructor Invoked***", LogLevel::INFO);
    m_MutexLock.Unlock();
    printf("***\nCMonitorLock::~CMonitorLock() Out of Scope Releasing Lock***", LogLevel::INFO);
  }

} //namespace DesignPattern