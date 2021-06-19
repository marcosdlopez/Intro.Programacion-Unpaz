#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 4
#define m 4

/*

Si tenés una matriz (4 X 4) cargada con números enteros
Se pide calcular el promedio de los números marcados con resaltador.
*/

int main()
{
	int i,j,matriz[n][m];
	float promedio,suma;
    double x = 4;


    for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("\nMATRIZ[%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\nMATRIZ INGRESADA\n");
	for (i=0;i<n;i++)


	{
		printf("\n");
		for (j=0;j<m;j++)
		{
			printf("\t %d",matriz[i][j]);
		}
	}

/*Diagonal de la matriz */

	printf("\nDIAGONAL DE LA MATRIZ");


	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<m;j++)


		{

			if (i==j)
			{
				printf("\t %d",matriz[i][j]);
                suma = suma+matriz[i][j];
                promedio=suma/x;

}
			else
			{
				printf("\t 0");
			}


		}
	}

printf("\n \n El Promedio es: %0.2f ",promedio);

	system("pause");
	return 0;
}
