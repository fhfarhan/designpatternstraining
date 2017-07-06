#ifndef __MONITORLOCK__H__
#define __MONITORLOCK__H__

#include "mutex.h"

namespace DesignPattern
{
  //=========================================================================	
  class CMonitorLock
  {

  public:
    CMonitorLock(CMutex& MutexLock);
    virtual ~CMonitorLock();   

  private:      
    //Copy Constructor is locked for outer world
    CMonitorLock(CMonitorLock& CloneObj):m_MutexLock(CloneObj.m_MutexLock)
    {      
      //This is just stub we're not letting the instance to be copied
    }
    //Assignment-operator is locked for outer world
    CMonitorLock& operator=(CMonitorLock& CloneObj)
    {
      //This is just stub we're not letting the instance to be copied
      return *this;
    }

    CMutex& m_MutexLock;

  }; //class CMonitorLock

} //namespace DesignPattern

#endif //__MONITORLOCK__H__