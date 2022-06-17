#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Operands.h"
using namespace std;

int main(){
    Operands X(false), Y(true), Z(true);
    cout<<X.getSIGN();  cout<<Y.getSIGN();  cout<<Z.getSIGN(); 

    Operands Q = X; //copy constructor 
    cout<<Q.getSIGN();
    Operands R = (X + Y);  //logic or
    cout<<R.getSIGN();

    return 0;
}