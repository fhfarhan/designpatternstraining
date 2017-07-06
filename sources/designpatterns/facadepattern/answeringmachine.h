#ifndef __ANSWERING__MACHINE__H__
#define __ANSWERING__MACHINE__H__


namespace DesignPattern
{
  //=========================================================================
  class CAnsweringMachine
  {
  public:
    CAnsweringMachine();
    virtual bool AutoAnswerOn();
    virtual bool AutoAnswerOff();
    virtual bool PlayMessageOn();
    virtual bool RecordMessageOn();
    virtual bool PlayMessageOff();
    virtual bool RecordMessageOff();
    virtual ~CAnsweringMachine();
  private:
    bool m_AutoAnswer;
  };

} //namespace DesignPattern

#endif //__ANSWERING__MACHINE__H__