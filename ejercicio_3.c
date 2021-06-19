#include <stdlib.h>
#include <stdio.h>

//funcion principal

/*Aca les comento si ingresamos una letra recuerden que se usaba el parametro %c
si ingresamos un numero con decimal era %f. Esto con el scanf
para reservar ese espacio de memoria y decirle que es caracter es char, si era numero decimal era float*/
int main()
{
    char letra; //defino un espacio de memoria donde guardamos un caracter
    printf("Ingrese una letra ");
    scanf("%c", &letra);
    printf("La letra ingresada es %c", letra);
    return 0;
}
