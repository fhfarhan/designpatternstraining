#ifndef __WALKMAN__DEVICE__H__
#define __WALKMAN__DEVICE__H__

#define DC_POWER_PLUGGEDIN_OK 0
#define PLAY_OK 0
#define SUPPORTED_DC_VOLTAGE 12
#define STANDARD_RESISTANCE 4

#include "dcadaptor.h"

namespace DesignPattern
{
  //=========================================================================
  //Client : The DC capable device that cosumes AC-Power-Supply using DC-Adapter
  class CWalkmanDevice
  {

  public:
    CWalkmanDevice(CDCAdapter *pDCAdapter);
    virtual int PowerOnDevice();
    virtual int PlayMusic();
    virtual ~CWalkmanDevice();

  protected:
    CDCAdapter *m_pDCAdapter;

  }; //class CWalkmanDevice

} //namespace DesignPattern

#endif //__WALKMAN__DEVICE__H__