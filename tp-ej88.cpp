/*ejercicio 88
 Desarrollar un algoritmo ingrese desde teclado datos a un vector de 10 posiciones
 y que detecte los elementos repetidos de un vector
 y los reemplace con un 0 y los deposite en otro vector.
 Debe mostrarse por pantalla el vector resultante
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    int i, vector_origen[tam], j, vector_destino[tam];
    for(i=0; i<tam; i++)
    {
        printf("\nvector[%d]=",i);
        scanf("%d",&vector_origen[i]);
    }
    printf("\n");
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(i!=j)
            {
                if(vector_origen[i]==vector_origen[j])
                    {
                         vector_destino[i]=0;
                         j=tam;
                    }
                else
                {
                    vector_destino[i]=vector_origen[i];
                }
            }
        }
    }
    for(i=0; i<tam; i++)
    {
        printf("\nvector[%d] : %d",i, vector_destino[i]);
    }
    system("pause");
    return 0;
}
