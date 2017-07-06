#ifndef __MUTEX__H__
#define __MUTEX__H__


namespace DesignPattern
{
  //=========================================================================	
  class CMutex
  {

  public:
    CMutex();
    virtual ~CMutex();
    bool Lock();
    bool Unlock();

  private:    
    //Copy Constructor is locked for outer world
    CMutex(CMutex& CloneObj)
    {
      //This is just stub we're not letting the instance to be copied
    }
    //Assignment-operator is locked for outer world
    CMutex& operator=(CMutex& CloneObj)
    {
      //This is just stub we're not letting the instance to be copied
      return *this;
    }

  }; //class CMutex

} //namespace DesignPattern

#endif //__MUTEX__H__