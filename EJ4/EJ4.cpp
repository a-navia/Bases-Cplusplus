//
// Created by navia on 31-Oct-24.
//

#include "EJ4.h"
#include <iostream>

void EJ4::Array() {
    int diez[10];
    for (int i = 0; i < 10; i++) {
        diez[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << "array print: " << diez[i] << std::endl;
    }
}