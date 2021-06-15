#ifndef STATE_CLASS_H_
#define STATE_CLASS_H_

class State {
 public:
  virtual ~State() {};
  virtual void methodX() = 0;
  virtual void methodY() = 0;
  virtual void methodZ() = 0;
};

#endif // STATE_CLASS_H

