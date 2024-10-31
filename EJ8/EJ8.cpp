//
// Created by navia on 31-Oct-24.
//

#include "EJ8.h"
#define  PI 3.1416
#include <iostream>
void constantesPI() {
    std::cout << "El valor de PI es: " << PI << std::endl;
}
void constantesTypedef() {
    typedef int entero;
    entero x = 255;
    std::cout << "El valor de x es: " << x << std::endl;
}
void constantesEnum() {
    enum colores {rojo, verde, azul};
    colores c = azul;
    std::cout << "El valor de c es: " << c << std::endl;
}
