//
// Created by navia on 30-Oct-24.
//
#include <iostream>
#include "EJ1/EJ1.h"
#include "EJ2/EJ2.h"
#include "EJ3/EJ3.h"
#include "EJ4/EJ4.h"
#include "EJ5/EJ5.h"
#include "EJ6/EJ6.h"
#include "EJ7/EJ7.h"
#include "EJ8/EJ8.h"
#define PI 3.1416

//main() argumentos
int main(int argc, char* argv[]) {
//EJ1 - Declaracion de Variables
    //declaracion
    std::cout << "EJERCICIO 1 " << std::endl;
    std::string nombre;
    int edad;
    //inicializacion llama funcion
    DatosUsuarios(nombre, edad);
    //imprime
    imprimirDatos(nombre, edad);
//EJ2 - Instrucciones de prueba
    std::cout << "EJERCICIO 2 " << std::endl;
    EJ2 p;
    p.pruebaEdad(edad);
//EJ3 - Bucles (for)
    std::cout << "EJERCICIO 3 " << std::endl;
    EJ3 b;
    b.bucleFor();
    b.bucleWhile();
    b.bucleDoWhile();
    b.bucleBreak();
//EJ4 - Declaracion y arrays
    std::cout << "EJERCICIO 4 " << std::endl;
    EJ4 a;
    a.Array();
//EJ5 - Funciones y prototipos
    std::cout << "EJERCICIO 5 " << std::endl;
    //Declaracion funcion suma
    EJ5 s;
    int num1 = 5;
    int num2 = 10;
    int resultado = s.Suma(num1, num2);
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
    //Declaracion funcion multi return/void
    int resultado2 = s.multi(num1, num2);
    std::cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << resultado2 << std::endl;
    //double de suma para demostrar polimorfismo
    double resultadoDouble = s.Suma(2.5, 4.0);
    std::cout << "Suma double de 2.5 y 4.0 es: " << resultadoDouble << std::endl;
    //funcion variable de argumentos
    std::cout << "variable de arg: "<< s.suma(7, 1, 2, 3, 4, 7)<< std::endl;//funcion en linea
    //funcion parametro por defecto
    const std::string f_error = "Error: Something went wrong";
    s.printlog("inicio de la aplicacion");
    s.printlog("inicio de la aplicacion", "log.txt");
    //funcion recursiva
    int n;
    std::cout << "posicion fibonacci: ";
    std::cin >> n;
    int fiboResultado = s.fibonacci(n);
    std::cout << "en esta posicion " << n << " es: " << fiboResultado << std::endl;
//EJ6 - Punteros
    //punteros de variables
    std::cout << "EJERCICIO 6 " << std::endl;
    char c = 'a';
    char* pc = &c;
    printpChar(pc);
    cambioChar(pc, 'b');
    printpChar(pc);
    //punteros de arrays
    char tab[] = {'P', 'N', 'M', 'B', 'A'};
    int recorrido = sizeof(tab) / sizeof(tab[0]);
    char* ptab = tab;
    printArray(ptab,recorrido);
    ptab[1] = 'Z';
    printArray(ptab,recorrido);
    //punteros asignacion de memoria
    opMemoria();
    //punteros de punteros
    char t = 'A';
    char* pt = &t;
    char** ppt = &pt;
    punteroPuntero(ppt);
    **ppt = 'B';
    punteroPuntero(ppt);
//EJ7 - Referencias
    std::cout << "EJERCICIO 7 " << std::endl;
    int numref = 5;
    int& ref = numref;
    modificarRef(ref);
//EJ8 - Constantes
    //simbolicas
    std::cout << "EJERCICIO 8 " << std::endl;
    constantesPI();
    //typedef
    constantesTypedef();
    //enum
    constantesEnum();
    return 0;
}