#include "ComplexNumber.hpp"
#include <iostream>
using namespace std;

ComplexNumber::ComplexNumber(int x, int y) {
    real = x;
    imag = y;
}

void ComplexNumber::stampa() {
    if(imag>0)
        std::cout << real  <<"+"<< imag <<"i" << std::endl;
    else
        std::cout << real  << imag <<"i" << std::endl;
}

ComplexNumber ComplexNumber::operator+ (ComplexNumber b) {
    return ComplexNumber(real+b.real, imag+b.imag);
}

bool ComplexNumber::operator== (ComplexNumber b) {
    return real==b.real && imag==b.imag;
}
