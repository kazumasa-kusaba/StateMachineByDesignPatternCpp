#ifndef CONTEXT_CLASS_H_
#define CONTEXT_CLASS_H_

#include <vector>

#include "state_class.hpp"

class Context {
 public:
  Context();
  ~Context() {};
  
  void callMethodX();
  void callMethodY();
  void callMethodZ();

 private:
  State* state;
};

#endif // CONTEXT_CLASS_H

