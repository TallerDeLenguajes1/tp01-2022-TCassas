#include <stdio.h>

int CuadradoDeUnNumero(int numero);
void CuadradoDeUnNumeroVoid(int numero);
void MuestraContenidoYDireccion(int * variable);
void Invertir(int * a, int * b);
void Orden(int * a, int * b);

int main() {
    int numeroAElevar;
    printf("Ingrese un numero para elevar al cuadrado\n");
    scanf("%d", &numeroAElevar);
    printf("El cuadrado de %d es %d\n", numeroAElevar, CuadradoDeUnNumero(numeroAElevar));
    CuadradoDeUnNumeroVoid(numeroAElevar);
    
    printf("\n");
    
    int variable1;
    int variable2;
    printf("Ingrese 2 numeros separados por un espacio para mostrar su contenido y direccion de memoria\n");
    scanf("%d %d", &variable1, &variable2);
    MuestraContenidoYDireccion(&variable1);
    MuestraContenidoYDireccion(&variable2);
    
    printf("\n");
    
    //a, b variables cuyos valores seran intercambiados
    int a;
    int b;
    printf("Ingrese 2 numeros separados por un espacio para intercambiar sus valores\n");
    scanf("%d %d", &a, &b);
    printf("Antes de intercambiar-> a: %d - b: %d\n", a, b);
    Invertir(&a,&b);
    printf("Luego de intercambiar-> a: %d - b: %d\n", a, b);
    
    printf("\n");
    
    //Ordenar a, b
    //Para evitar confución regreso los valores al estado original
    Invertir(&a,&b);
    printf("Antes de ordenar de menor a mayor: a: %d - b: %d\n", a, b);
    Orden(&a,&b);
    printf("Luego de ordenar de menor a mayor: a: %d - b: %d\n", a, b);
    
    return 0;
}

int CuadradoDeUnNumero(int numero) {
    return numero * numero;
}

void CuadradoDeUnNumeroVoid(int numero) {
    printf("(Void) El cuadrado de %d es %d\n", numero, CuadradoDeUnNumero(numero));
}

void MuestraContenidoYDireccion(int * variable) {
    printf("Contenido: %d - Direccion de memoria: %p\n", *variable, variable);
}

void Invertir(int * a, int * b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void Orden(int * a, int * b) {
    if(*a > *b) {
        Invertir(a, b);
    }
}