#include<stdio.h>
#include<conio.h>

/*

Ejercicio 2
Utilizando funciones.
Se carga un vector de 5 posiciones con números enteros.
Realizar un programa que me indique si los números que tiene el vector, forman un número
capicúa

*/
void cargar(int vec[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("Ingrese numeros enteros:");
        scanf("%i",&vec[x]);
    }
}

void imprimir(int vec[5])
{
    int x;
    printf(" \n Vectores ingresados:");
    for(x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
}

void capicua (int vec[5])
{
  if(vec[0] == vec[4] && vec[1] == vec [3]) {
    printf("\n El numero es capicua");
  } else {
    printf(" \n El numero NO es capicua ");
  }
}

int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    capicua(vector);
    getch();
    return 0;
}
