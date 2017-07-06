#ifndef __LIGHT__CONTROLLER__H__
#define __LIGHT__CONTROLLER__H__


namespace DesignPattern
{
  //=========================================================================
  class CLightController
  {
  public:
    CLightController();
    virtual bool SwitchOnLights();
    virtual bool SwitchOffLights();
    virtual ~CLightController();
  private:
    bool m_fLightsOn;
  };

} //namespace DesignPattern

#endif //__LIGHT__CONTROLLER__H__