//
// Created by navia on 30-Oct-24.
//

#include "EJ1.h"
#include <iostream>
//uso de variable global
std::string ciudad;
//solicita datos y almacena.
void DatosUsuarios(std::string &nombre, int &edad) {
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;
    std::cout << "Por favor ingresa tu ciudad: ";
    std::cin >> ciudad;
}
//imprime los datos
void imprimirDatos(const std::string &nombre, int edad) {
    std::cout << "Hola, " << nombre << ". Tienes " << edad << " y vives en " << ciudad << ".\n";
}

