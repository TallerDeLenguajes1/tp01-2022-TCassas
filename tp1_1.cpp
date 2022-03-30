#include <stdio.h>

int main() {
    printf("Hola mundo\n");
    
    int variableInt = 23;
    int * punteroVariableInt = &variableInt;
    
    printf("Contenido del puntero: %d\n", *punteroVariableInt);
    printf("Direccion de memoria almacenada en el puntero: %p\n", punteroVariableInt);
    printf("Direccion de memoria de la variableInt: %p\n", &variableInt);
    printf("Direccion de memoria del puntero: %p\n", &punteroVariableInt);
    printf("Tamaño de la variable: %d Bytes\n\n", sizeof(variableInt));
    
    char variableChar = 'T';
    char * punteroVariableChar = &variableChar;
    
    printf("Contenido del puntero: %c\n", *punteroVariableChar);
    printf("Direccion de memoria almacenada en el puntero: %p\n", punteroVariableChar);
    printf("Direccion de memoria de la variableChar: %p\n", &variableChar);
    printf("Direccion de memoria del puntero: %p\n", &punteroVariableChar);
    printf("Tamaño de la variable: %d Bytes\n", sizeof(variableChar));
    
    return 0;
}