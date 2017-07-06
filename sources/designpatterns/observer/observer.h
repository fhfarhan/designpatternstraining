#ifndef __OBSERVER__H__
#define __OBSERVER__H__


namespace DesignPattern
{
  //=========================================================================	
  struct IObserver
  {
    virtual void Notify(double, double, double) = 0;

  }; 

} //namespace DesignPattern

#endif //__OBSERVER__H__