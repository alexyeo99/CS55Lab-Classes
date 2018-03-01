/*
Alex Yeo
For CMSC 21 Lab
February 28, 2018
Header file: "complex.h"
*/

class complex{
public:
    complex(double=0, double=0); //constructor 
    void addComplex(double, double); //add
    void subtractComplex(double, double); //subtract
    void printComplex(); //print
    void setComplex(double, double); //function to re-set value
private:
    double realNum;
    double imaginaryNum;
    std::tuple<double, double> addOP(double, double); //internal add func.
};


