/*
Alex Yeo
For CMSC 21 Lab
February 28, 2018
Main file
*/

#include<iostream>
#include "complex.h"

using namespace std;

int main(){
    complex a(5,5); //initialize
    a.addComplex(1,1); // addition function
    a.setComplex(10,10); //re-set function
    a.subtractComplex(1,1); //subtract
    a.printComplex(); // print
    return 0;
}
