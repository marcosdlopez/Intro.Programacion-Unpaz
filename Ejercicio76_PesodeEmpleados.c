#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int i, peso, mayor=0, menor=0;

    for (i=1; i<20; i++)
   {


    printf("Ingrese el pero del empleado numero %d\n", i);
    scanf("%d", &peso);

    if (peso>80)

        mayor++;

    else
        menor++;

    }
    printf("Hay %d empleados con peso mayor a 80kg y %d empleados con peso menor a 80kg\n",mayor, menor);

    system("pause");
    return 0;
}
