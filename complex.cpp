/*
Alex Yeo
For CMSC 21 Lab
February 28, 2018
object: complex - functions
*/

#include <iostream>
#include "complex.h"
#include <tuple>
#include <iomanip>

using namespace std;

complex::complex(double r, double i){
    realNum = r;
    imaginaryNum = i;
}

tuple<double, double> complex::addOP(double r, double i){
    return make_tuple(realNum+r, imaginaryNum+i);
}

void complex::addComplex(double r, double i){
    auto result = addOP(r, i);
    cout << "[Add. of 2 complex numbers]: ";
    cout << setw(3) << "(" << realNum << ", " << imaginaryNum << "i) + (" << r << ", " << i << "i) = ";
    cout << "(" << get<0>(result) << ", " << get<1>(result) << "i)" << endl;
}

void complex::subtractComplex(double r, double i){
    auto result = addOP(r*-1, i*-1);
    cout << "[Sub. of 2 complex numbers]: ";
    cout << setw(3) << "(" << realNum << ", " << imaginaryNum << "i) + (" << r << ", " << i << "i) = ";
    cout << "(" << get<0>(result) << ", " << get<1>(result) << "i)" << endl;
}

void complex::printComplex(){
    cout << "[Print complex num.]: ";
    cout << setw(10) << "(" << realNum << ", " << imaginaryNum << "i)" << endl; 
}

void complex::setComplex(double r, double i){
    realNum = r;
    imaginaryNum = i;
}
