//
// Created by navia on 31-Oct-24.
//
#include "EJ2.h"
#include <iostream>

void EJ2::pruebaEdad(int edad) {
    // Paso 3: Verifica si el usuario es mayor de 18
    if (edad >= 18) {
        // Paso 4: Imprime un mensaje diciendo que el usuario es mayor de edad
        std::cout << "Eres mayor de edad.\n";
    } else {
        // Imprime un mensaje diciendo que el usuario es menor de edad
        std::cout << "Eres menor de edad.\n";
    }
}