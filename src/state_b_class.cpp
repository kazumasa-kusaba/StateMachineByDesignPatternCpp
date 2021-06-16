#include "state_b_class.hpp"

#include <iostream>

StateB* StateB::singleton = nullptr;

StateB::~StateB()
{
  delete singleton;
}

StateB* StateB::getInstance()
{
  if (singleton == nullptr) {
    singleton = new StateB;
  }
  return singleton;
}

void StateB::methodX()
{
  std::cout << "called methodX in StateB\n";
}

void StateB::methodY()
{
  std::cout << "called methodY in StateB\n";
}

void StateB::methodZ()
{
  std::cout << "called methodZ in StateB\n";
}

