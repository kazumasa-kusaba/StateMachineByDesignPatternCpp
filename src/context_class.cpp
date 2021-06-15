#include "context_class.hpp"

#include <iostream>

#include "state_a_class.hpp"
#include "state_b_class.hpp"
#include "state_c_class.hpp"

Context::Context()
{
  state = StateA::getInstance();
}

void Context::callMethodX()
{
  std::cout << "Change state to StateA\n";
  state = StateA::getInstance();
  state->methodX();

  std::cout << "Change state to StateB\n";
  state = StateB::getInstance();
  state->methodX();

  std::cout << "Change state to StateC\n";
  state = StateC::getInstance();
  state->methodX();
}

void Context::callMethodY()
{
  std::cout << "Change state to StateA\n";
  state = StateA::getInstance();
  state->methodY();

  std::cout << "Change state to StateB\n";
  state = StateB::getInstance();
  state->methodY();

  std::cout << "Change state to StateC\n";
  state = StateC::getInstance();
  state->methodY();
}

void Context::callMethodZ()
{
  std::cout << "Change state to StateA\n";
  state = StateA::getInstance();
  state->methodZ();

  std::cout << "Change state to StateB\n";
  state = StateB::getInstance();
  state->methodZ();

  std::cout << "Change state to StateC\n";
  state = StateC::getInstance();
  state->methodZ();
}

