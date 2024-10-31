//
// Created by navia on 31-Oct-24.
//
#include "EJ6.h"
#include <iostream>

void printpChar
(char* c) {
    std::cout << c << std::endl;
}
void cambioChar(char* c, char nuevo) {
    *c = nuevo;
}
void printArray(char* array, int recorrido) {
    for (int i = 0; i < recorrido; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}
void opMemoria() {
    double* d = new double [30];
    d[0] = 7.3;
    d[1] = 8.3;
    std::cout << "El primer valor en el array es: " << d[0] << std::endl;
    std::cout << "El primer valor en el array es: " << d[1] << std::endl;
    delete[] d;
}
void punteroPuntero(char** ppt) {
    if (ppt != nullptr && *ppt != nullptr) {
        std::cout << "valor puntero:puntero: " << **ppt << std::endl;
    } else {
        std::cerr << "NUlo" << std::endl;
    }
}
