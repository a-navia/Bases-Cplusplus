//
// Created by navia on 31-Oct-24.
//

#include "EJ3.h"
#include <iostream>

void EJ3::bucleFor() {
    for (int i = 1; i <= 10; i++) {
        std::cout << "For: indice = " << i << std::endl;
    }
}

void EJ3::bucleWhile() {
    int num;
    std::cout << "While: ingresa un numero: ";
    std::cin >> num;
    int i = 1;
    while (i <= 10) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
        i++;
    }
}

void EJ3::bucleDoWhile() {
    int num;
    std::cout << "DoWhile: ingresa otro numero: ";
    std::cin >> num;
    int i = 1;
    do {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
        i++;
    } while (i <= 10);
}

void EJ3::bucleBreak() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Break: Se ha alcanzado el valor 5, saliendo del bucle." << std::endl;
            break;
        }
        std::cout << "i: " << i << std::endl;
    }
}
