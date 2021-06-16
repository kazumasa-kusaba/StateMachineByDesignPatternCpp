#ifndef STATE_C_CLASS_H_
#define STATE_C_CLASS_H_

#include "state_class.hpp"

class StateC : public State {
 public:
  ~StateC();
  static StateC* getInstance();
  void methodX();
  void methodY();
  void methodZ();

 private:
  static StateC* singleton;
  StateC() {};
};

#endif // STATE_C_CLASS_H

