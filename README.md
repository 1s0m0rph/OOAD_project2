# OOAD_project2

___

### Corey Stephens and Daniel Taylor

___

### Language used: c++, compiled with gcc using the c++11 specification.

___

### Comments on development:

1. Strategy was used to implement both the roam() functionality of the Animal classes and the eat() functionality. This allows animals that live in different environments and eat different foods to act differently from other animals.

2. One minor change in the location of randomness for this program is that it is implemented *only* in the strategy patterns, which allows the Animal subclasses to be much simplified.
