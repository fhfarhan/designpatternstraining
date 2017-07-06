#include "registrationauthority.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================
  CRegistrationAuthority::CRegistrationAuthority()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRegistrationAuthority::CRegistrationAuthority() Constructor Invoked***", LogLevel::INFO);
  }
  bool CRegistrationAuthority::RegisterationProcess(IAutoMobile *pAutoMobile)
  {
    if (!pAutoMobile)
    {
      return false;
    }
    CLogger::Instance_MTSafe_V4().LogMessage("***CRegistrationAuthority::RegisterationProcess() Registering Vehicle***", LogLevel::INFO);
    VehicleType VType = pAutoMobile->GetType();
    VehicleCategory VCategory = pAutoMobile->GetCategory();
    VehicleColor VColor = pAutoMobile->GetColor();
    int EngineCC = pAutoMobile->GetEngineDisplacement();
    bool fRegistered = pAutoMobile->Register("LHR-2015");
    return fRegistered;
  }
  CRegistrationAuthority::~CRegistrationAuthority()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CRegistrationAuthority::~CRegistrationAuthority() Destructor Invoked***", LogLevel::INFO);
  }
} //namespace DesignPattern