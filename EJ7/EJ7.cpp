//
// Created by navia on 31-Oct-24.
//

#include "EJ7.h"
#include <iostream>
void modificarRef(int &ref) {
    ref += 15;
    std::cout << "Valor de ref en funcion: " << ref << std::endl;
}