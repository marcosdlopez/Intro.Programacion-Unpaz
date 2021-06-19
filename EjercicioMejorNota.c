#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, mejornota=0, i;

    for (i=0; i<10; i++)

    {

    printf("ingrese la nota de los alumnos:\n");
    scanf("%f", &nota);


    if (nota>mejornota)
       {
        mejornota=nota;
       }
    }
    printf("la mejor nota es de: %.2f\n\n", mejornota);

    system("pause");
    return 0;
}
