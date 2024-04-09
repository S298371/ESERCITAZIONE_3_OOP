#ifndef UNTITLED_COMPLEXNUMBER_H
#define UNTITLED_COMPLEXNUMBER_H


class ComplexNumber {
public:
    int real;
    int imag;
    ComplexNumber(int x, int y);
    ComplexNumber operator+ (ComplexNumber b);
    bool operator== (ComplexNumber b);
    void stampa();

};


#endif //UNTITLED_COMPLEXNUMBER_H
