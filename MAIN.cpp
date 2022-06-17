#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Operands.h"
using namespace std;

int main(){
    Operands X(false), Y(true), Z(true);
    X.getSIGN();  Y.getSIGN();  Z.getSIGN(); 

    Operands Q = X; //copy constructor 
    Operands R = X + Y;  //logic or

    return 0;
}