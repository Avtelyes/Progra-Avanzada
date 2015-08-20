//
//  main.c
//  Ejercicio Biblioteca
//
//  Created by Josué Carlos García Puig on 17/08/15.
//  Copyright (c) 2015 Avtelyes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ISBN[50];
    char titulo[50];
    char autor[50];
    int paginas;
} Libro;

Libro libro;

void AdicionLibro(Libro *, Libro);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    int l = 0;
    
    printf("Entra la cantidad de libros iniciales: ");
    scanf("%d", &l);
    
    Libro * libros = (Libro *) malloc(l * sizeof(Libro));
    
    
    
    
    free(libros);
    
    return 0;
}

void AdicionLibro(Libro libros[], Libro c) //Adicion, Borrar, Actualizar, Visualizar (toda biblio)
{
    if(libros != '\0')
    {
        
    }
}
