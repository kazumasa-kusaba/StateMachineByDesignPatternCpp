# StateMachineByDesignPatternCpp
State machine sample program (C++) by design pattern

# Class diagram (UML)
![Class diagram (UML)](/doc/StateMachineUML.png) 

# Usage
## Compile
```
$ g++ main.cpp context_class.cpp state_a_class.cpp state_b_class.cpp state_c_class.cpp -o main
```

## Run executable file
```
$ ./main
Change state to StateA
called methodX in StateA
Change state to StateB
called methodX in StateB
Change state to StateC
called methodX in StateC
Change state to StateA
called methodY in StateA
Change state to StateB
called methodY in StateB
Change state to StateC
called methodY in StateC
Change state to StateA
called methodZ in StateA
Change state to StateB
called methodZ in StateB
Change state to StateC
called methodZ in StateC
```

