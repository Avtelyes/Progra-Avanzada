//
//  main.c
//  Segunda Clase
//
//  Created by Josué Carlos García Puig on 13/08/15.
//  Copyright (c) 2015 Avtelyes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void imprime(int *, int *);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    /*int lista[] = {1,2,3,4,5,6};
    
    printf("%d\n", lista[1]);
    printf("%d\n", *(lista+2));*/
    
    /* Para matrices */
    // m + (f * nc) + c
    
    int n = 0;
    
    /* Leer el número de elementos */
    printf("Entra la cantidad de elementos: ");
    scanf("%d", &n); //Lee y almacena el valor en la direccion de memoria de la variable n
    
    /* Reservar memoria */
    int * numeros = (int *) malloc(n * sizeof(int));
    
    /* Generar numeros aleatorios */
    srand((int) time(NULL));
    
    int * aux;
    int * fin = (numeros + n);
    for(aux = numeros; aux < fin; ++aux) {
        *aux = rand() % 100;
    }
    
    /* Imprimir los numeros */
    imprime(numeros, fin);
    
    int m = 0;
    
    /* Leer el número de elementos nuevos */
    printf("Entra la cantidad de elementos nuevos: ");
    scanf("%d", &m); //Lee y almacena el valor en la direccion de memoria de la variable n
    
    /* Reservar memoria */
    numeros = (int *) realloc(numeros, (n+m) * sizeof(int));
    
    /* Generar numeros aleatorios para elementos nuevos*/
    srand((int) time(NULL));
    
    fin = numeros + n + m;
    
    for(aux=numeros + n; aux < fin; ++aux) {
        *aux = rand() % 100;
    }
    
    /* Imprimir los numeros */
    imprime(numeros, fin);
    
    /* Liberar Memoria */
    free(numeros);
    
    return 0;
}

void imprime(int * inicio, int * fin)
{
    int * aux;
    
    for(aux = inicio; aux < fin; ++aux) {
        printf("%d\t", *aux);
    }
    
    printf("\n");
}
