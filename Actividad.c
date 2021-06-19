#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf( "\n   Introduzca un n%cmero entero: ", 163 );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR \n \n ");

    if (numero<10)
    {

        numero=numero+5;
        printf("\n\n el resultado es menor a 10 y la suma de tu resultado es %d \n \n",numero);
    }

   if(numero)
        {
            numero=numero-5;
            printf("\n\n el resultado de la resta es %d \n \n",numero);

        }



    system("pause");
    return 0;


}


