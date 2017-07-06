#include "answeringmachine.h"
#include "logger.h"

namespace DesignPattern
{
  //=========================================================================

  CAnsweringMachine::CAnsweringMachine()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::CAnsweringMachine() Constructor Invoked***", LogLevel::INFO);
    m_AutoAnswer = false;
  }
  bool CAnsweringMachine::AutoAnswerOn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::AutoAnswerOn() Invoked***", LogLevel::INFO);
    m_AutoAnswer = true;
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::AutoAnswerOn() Auto-Answer Mode is Set ON***", LogLevel::INFO);
    return true;
  }
  bool CAnsweringMachine::AutoAnswerOff()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::AutoAnswerOff() Invoked***", LogLevel::INFO);
    m_AutoAnswer = false;
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::AutoAnswerOff() Auto-Answer Mode is Set OFF***", LogLevel::INFO);
    return true;
  }

  bool CAnsweringMachine::PlayMessageOn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::PlayMessageOn() Play-Message Set ON***", LogLevel::INFO);
    return true;
  }

  bool CAnsweringMachine::RecordMessageOn()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::RecordMessageOn() Record-Message Set ON***", LogLevel::INFO);
    return true;
  }

  bool CAnsweringMachine::PlayMessageOff()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::PlayMessageOff() Play-Message Set OFF***", LogLevel::INFO);
    return true;
  }

  bool CAnsweringMachine::RecordMessageOff()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::RecordMessageOff() Record-Message Set OFF***", LogLevel::INFO);
    return true;
  }

  CAnsweringMachine::~CAnsweringMachine()
  {
    CLogger::Instance_MTSafe_V4().LogMessage("***CAnsweringMachine::~CAnsweringMachine() Destructor Invoked***", LogLevel::INFO);
  }

} //namespace DesignPattern

