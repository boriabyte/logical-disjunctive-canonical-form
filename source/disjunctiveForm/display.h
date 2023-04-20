#pragma once
#include "declarations.h"

void display() {

    elementalVectors = pow(2, n);
    std::cout << "This is a program which takes into account the number of elemental vectors of a binary set B" << std::endl;
    std::cout << "and returns the canonical disjunctive form of a binary function." << std::endl;
    std::cout << std::endl;
    std::cout << "The number of elemental vectors of set B is 2^n. Insert n: "; std::cin >> n;
    elementalVectors = pow(2, n);
    std::cout << "Number of elemental vectors: 2^"; std::cout << n << " = "; std::cout << elementalVectors << std::endl;
    std::cout << "The truth table will have " << elementalVectors << " rows." << std::endl;
    std::cout << "For simplicity's sake, we will take into account only 3 variables, so our truth table will be of size " << elementalVectors << "x3." << std::endl; \
    std::cout << std::endl;
    std::cout << "Please insert the truth table's content (example: 0 0 0 1; the result can be arbitrary): " << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
        std::cout << table[i] << " ";
    std::cout << std::endl;


}