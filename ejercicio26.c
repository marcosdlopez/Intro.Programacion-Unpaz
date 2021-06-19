#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, cont=0, i;
    printf("\n\n\n  \t\t Contamos los pares\n\n\n");
    printf("Ingresa numeros:");

    for(i=1; i<=5; i++) // for(variable = inicio ; variable el hasta  ; incremento )
    {
        scanf("%d", &num);
        if( num % 2 == 0)
        {
            cont++;
        }
       //
       //

    }

    printf("\n\n\n \t\t\t El total de numeros pares es: %d \n\n\n", cont);
    system("pause");
    return 0;
}
