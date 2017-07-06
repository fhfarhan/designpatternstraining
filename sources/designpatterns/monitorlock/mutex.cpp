#include "mutex.h"
#include "logger.h"

namespace DesignPattern
{
  CMutex::CMutex()
  {
    printf("\n***CMutex::CMutex() Constructor Invoked***", LogLevel::INFO);
  }

  bool CMutex::Lock()
  {
    printf("\n***CMutex::Lock()  Invoked***", LogLevel::INFO);
    return true;
  }

  bool CMutex::Unlock()
  {
    printf("\n***CMutex::UnLock()  Invoked***", LogLevel::INFO);
    return true;
  }

  CMutex::~CMutex()
  {
    printf("\n***CMutex::~CMutex() Destructor Invoked***\n", LogLevel::INFO);  
  }

}//namespace DesignPattern