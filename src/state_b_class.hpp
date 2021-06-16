#ifndef STATE_B_CLASS_H_
#define STATE_B_CLASS_H_

#include "state_class.hpp"

class StateB : public State {
 public:
  ~StateB();
  static StateB* getInstance();
  void methodX();
  void methodY();
  void methodZ();

 private:
  static StateB* singleton;
};

#endif // STATE_B_CLASS_H

