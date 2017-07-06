#ifndef __NOTIFIER__H__
#define __NOTIFIER__H__

#include "observer.h"

namespace DesignPattern
{
  //=========================================================================	
  struct INotifier
  {
    virtual bool Subscribe(IObserver*) = 0;
    virtual bool UnSubscribe(IObserver*) = 0;
    virtual void NotifyObservers() = 0;
  };

} //namespace DesignPattern

#endif //__NOTIFIER__H__