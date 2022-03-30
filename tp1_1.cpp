/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    printf("Hola mundo\n");
    
    int variableInt = 23;
    int * punteroVariableInt = &variableInt;
    
    printf("Contenido del puntero: %d\n", *punteroVariableInt);
    printf("Direccion de memoria del puntero: %p\n", punteroVariableInt);
    printf("Direccion de memoria de la variable: %p\n", &variableInt);
    printf("Direccion de memoria del puntero: %p\n", &punteroVariableInt);
    printf("Tamaño de la variableInt: %d Bytes\n\n", sizeof(variableInt));
    
    char variableChar = 'T';
    char * punteroVariableChar = &variableChar;
    
    printf("Contenido del puntero: %d\n", *punteroVariableChar);
    printf("Direccion de memoria del puntero: %p\n", punteroVariableChar);
    printf("Direccion de memoria de la variable: %p\n", &variableChar);
    printf("Direccion de memoria del puntero: %p\n", &punteroVariableChar);
    printf("Tamaño de la variableChar: %d Bytes\n", sizeof(variableChar));
    
    return 0;
}