//
//  main.c
//  Primer Ejercicio AA
//
//  Created by Josué Carlos García Puig on 17/08/15.
//  Copyright (c) 2015 Avtelyes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void ReverseWord(char *);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    
    char cadena[] = "Hola";
    
    char * aux;
    char * cadena2;
    
    ReverseWord(cadena);
    
    return 0;
}

void ReverseWord(char *cadena)
{
    char * start;
    char * aux;
    char * aux2;
    int * size;
    
    start = aux2 = cadena;
    
    
    while(*start != '\0')
    {
        while(*start != ' ' && *start != '\0')
        {
            start++;
        }
        
        aux = start;
        
        while(*aux != '\0')
        {
            aux++;
        }
        
    }
    
    *size = (aux-1) - aux2;
    
    printf("El tamaño es: %i", *size);
    
    //free(aux);
    //free(start);
}


