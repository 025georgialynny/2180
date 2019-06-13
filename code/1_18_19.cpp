//1/18/2019 
/*
o.o. design - object oriented design

Encapsulation
   - the most basic idea of oo design
   - why we have an object (classes)
   
   Encapsulate two main components
      -data
         -we use member variables/attributes
      -functions
         -we use member methods
      (capture in a single entity in a singly program)
      
      -member types
         -(variable) any type (including that of another class)
                     ^class composition
         -(methods) any method
            -constructor (called when you create an instance of the class)
               -default constructor allocates memory
               -your constructor chiefly initializes data members
            -destructor 
               -does nothing default
               -called when you exit the scope of the local variable
                  -if you want to do something specific with class before it is deleted
         -two categories
            -public
               -members of the class that are accesible anywhere that has an instance of the class in scope
            -private - most often
               -only accessible through member methods of the class
            -protected 
               -class inheritance
               -if a class is derived from a base class protected members are accessible
               
   -Dynamically-Sized Arrays (not vectors) - first thing we'll do this semester
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class FizzBuzz{

};

int main(){


   return 0;
}