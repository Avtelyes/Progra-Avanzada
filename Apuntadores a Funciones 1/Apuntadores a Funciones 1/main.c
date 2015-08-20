//
//  main.c
//  Apuntadores a Funciones 1
//
//  Created by Josué Carlos García Puig on 20/08/15.
//  Copyright (c) 2015 Avtelyes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef void (* opcion_t) (int);

#define N 3

void abrir(int);
void guardar(int);
void salir(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    opcion_t * menu = (opcion_t *) malloc(N * sizeof(opcion_t));
    
    *menu = abrir;
    *(menu+1) = guardar;
    *(menu+2) = salir;
    
    printf("--- Opciones --- \n1-Abrir\n2-Guardar\n3-Salir\nEscoge tu opción: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    /* Utilizando switch */
    
    switch (opcion) {
        case 1:
            abrir(opcion);
            break;
            
        case 2:
            guardar(opcion);
            break;
            
        case 3:
            salir(opcion);
            break;
            
        default:
            printf("Opcion no valida\n");
            break;
    }
    
    /* Apuntadores a Funciones */
    
    (*(menu+opcion-1))(opcion);
    
    free(menu);
    
    return 0;
}


void abrir(int opcion)
{
    printf("%d - Abriendo el archivo...\n", opcion);
}

void guardar(int opcion)
{
    printf("%d - Guardando el archivo...\n", opcion);
}

void salir(int opcion)
{
    printf("%d - Terminando el archivo...\n", opcion);
}

