#ifndef __REGISTRATION__AUTHORITY__
#define __REGISTRATION__AUTHORITY__

#include "automobile.h"

namespace DesignPattern
{
  //=========================================================================
  class CRegistrationAuthority
  {
  public:
    CRegistrationAuthority();
    /*CRegistrationAuthority(const CRegistrationAuthority& cloneObj)
    {
      printf("\n CRegistrationAuthority(Clone-Copy-Constructor)");
    }*/
    CRegistrationAuthority&  operator= (CRegistrationAuthority& CloneObj)
    {
      printf("\n CRegistrationAuthority(Operator=)");
      return *this;
    }
    virtual bool RegisterationProcess(IAutoMobile *pAutoMobile);
    virtual ~CRegistrationAuthority();
  };

} //namespace DesignPattern

#endif //__REGISTRATION__AUTHORITY__