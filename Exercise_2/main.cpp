#include <iostream>
#include "ComplexNumber.hpp"

void coniugato(int real, int imag){
    if (imag<0)
        std:: cout << real <<"+"<< -imag << "i" << std::endl;
    else
        std::cout << real <<"-"<< imag <<"i" << std::endl;
}

int main() {
    ComplexNumber A = ComplexNumber(3,2);
    std::cout << "numero complesso A: "<< std::endl;
    A.stampa();
    ComplexNumber B = ComplexNumber(8,-5);
    std::cout << "numero complesso B: "<< std::endl;
    B.stampa();
    ComplexNumber C = ComplexNumber(3,2);
    std::cout << "numero complesso C: "<< std::endl;
    C.stampa();
    ComplexNumber x = A + B;
    std::cout << " sommo i numeri A+B: "<< std:: endl;
    x.stampa();
    std::cout << "se i numeri sono diversi stampo 0 se sono uguali stampo 1" << std::endl;
    std::cout<< "numero A e numero B: "<< std:: endl;
    std::cout << (B==A) << std::endl;
    std:: cout << "numero A e numero C: "<< std:: endl;
    std::cout << (C==A) << std::endl;
    std::cout << "stampo il coniugato del numero: " << std::endl;
    ComplexNumber d = ComplexNumber(3,2);
    d.stampa();
    coniugato(3,2);
    return 0;
}
