//
// Created by navia on 31-Oct-24.
//

#include "EJ5.h"
#include <iostream>
#include <cstdarg>
#include <cstdio>
//funcion que devuelve suma
int EJ5::Suma(int a, int b) {
    return a + b;
}
double EJ5::Suma(double a, double b) {
    return a + b;
}
//funcion que devuelve "return"
int EJ5::multi(int a, int b) {
    return a * b;
}
//funcion que no devuelve "return"
void EJ5::printMensaje() {
    std::cout << "sin return." << std::endl;
}
//funcion con numero variable de argumentos
int EJ5::suma(int n, ...) {
    int suma = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++) {
        suma += va_arg(args, int);
    }
    va_end(args);
    return suma;
}
void EJ5::printlog(const char* mensaje, const char* nomarchivo) {
    if (nomarchivo == nullptr) {
        printf("%s\n", mensaje);
    } else {
        FILE* f = fopen(nomarchivo, "w");
        if (f == nullptr) {
            std::cerr << "error abriendo archivo" << std::endl;
            return;
        }
        fprintf(f, "%s\n", mensaje);
        fclose(f);
    }
}
int EJ5::fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}