#ifndef STATE_A_CLASS_H_
#define STATE_A_CLASS_H_

#include "state_class.hpp"

class StateA : public State {
 public:
  ~StateA();
  static StateA* getInstance();
  void methodX();
  void methodY();
  void methodZ();

 private:
  static StateA* singleton;
};

#endif // STATE_A_CLASS_H

