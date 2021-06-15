#include "state_a_class.hpp"

#include <iostream>

StateA* StateA::singleton = nullptr;

StateA::~StateA()
{
  delete singleton;
}

StateA* StateA::getInstance()
{
  if (singleton == nullptr) {
    singleton = new StateA;
  }
  return singleton;
}

void StateA::methodX()
{
  std::cout << "called methodX in StateA\n";
}

void StateA::methodY()
{
  std::cout << "called methodY in StateA\n";
}

void StateA::methodZ()
{
  std::cout << "called methodZ in StateA\n";
}

