#include "state_c_class.hpp"

#include <iostream>

StateC* StateC::singleton = nullptr;

StateC::~StateC()
{
  delete singleton;
}

StateC* StateC::getInstance()
{
  if (singleton == nullptr) {
    singleton = new StateC;
  }
  return singleton;
}

void StateC::methodX()
{
  std::cout << "called methodX in StateC\n";
}

void StateC::methodY()
{
  std::cout << "called methodY in StateC\n";
}

void StateC::methodZ()
{
  std::cout << "called methodZ in StateC\n";
}

