// Exercise 10.10 Solution: Card.h
//todo: Class Card represents the face and suit of a card.
//! 什麼是the face and suit of a card?

//* 最小

#ifndef OPERANDS_H
#define OPERANDS_H

#include <string>
#include <cstdlib>
using namespace std;

class Operands{
   public:
      
      //static const int totalFaces = 13;   //string array的size
      Operands(bool SIGN); // constructor: initialize LOGIC 01
      Operands(const Operands & right); // copy constructor 
      int getSIGN(void) const;
      void setSIGN(bool S);
      //string toString(void)const; // returns a string representation of a Card
      Operands operator+( Operands & right); //logic or

   private:
      bool SIGN; //0 或 1  true_or_false
      //static const string faceNames[ totalFaces ];

}; // end class Operands

#endif
