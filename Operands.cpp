#include <string>
#include <cstdlib>
#include "Operands.h"
using namespace std;

// constructor
Operands:: Operands(bool SIGN = true){ 
    (*this).SIGN = SIGN; 
}

// copy constructor
Operands:: Operands(const Operands & right){ 
    (*this).SIGN = right.SIGN; 
}

int Operands:: getSIGN(void) const{ return int((*this).SIGN); }


void Operands:: setSIGN(bool S){ (*this).SIGN = S; }

//logic or
Operands Operands::operator+( Operands & right ) { //in main:  c=a+b;        C = A or B
    Operands re;  
    re.SIGN = (this->SIGN) | (right.SIGN);
    return re;
}

////return type: string
//string Operands:: toString(void) const {  //?hi 10 const
//	return (*this).faceNames[getFace()] + " of " + (*this).suitNames[getSuit()] + "\n";
//	//ex:  faceNames[0] + "of" + suitNames[1];
//}