#ifndef __VEHICLE__FACTORY__
#define __VEHICLE__FACTORY__

#include "car.h"
#include "jeep.h"
#include "wagon.h"
#include "bus.h"
#include "truck.h"

//Category:Structural Design Patter

namespace DesignPattern
{
  //=========================================================================
  class CVehicleFactory
  {
  public:
    static IAutoMobile* GetVehicle(const VehicleSpecification& VSpecs);
  private:
    //Lock-Down un-wanted stuff/Don't let this class to be initiated
    CVehicleFactory();
    CVehicleFactory(CVehicleFactory& CloneObj);
    CVehicleFactory& operator=(CVehicleFactory& CloneObj);
  };

} //namespace DesignPattern

#endif //__VEHICLE__FACTORY__