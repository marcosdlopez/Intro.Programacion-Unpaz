#include <stdio.h>
#include <stdlib.h>

# define dias 7
# define vendedores 3


/*EJERCICIO 1
Un negocio tiene tres vendedores. El dueño del local les pide a Uds.
Que realicen un programa donde cargan las ventas diarias en una matriz de 7X3. Las columnas representan a cada vendedor
y las filas a los días de la semana.
Una vez realizada la carga de los datos, el programa debe calcular el promedio de venta de cada vendedor.*/

/* mostrar matriz completa*/

int main()
{
       int nroVentas [dias] [vendedores]; //declaro la matriz de 7X3
       int dia , vendedor ; // variables del for
       float acumPorVendedor [vendedores];


      //Cargo los datos en la matriz
      for( dia=0 ; dia < dias ; dia++)   // recorro la fila
      {
            for( vendedor=0 ; vendedor<vendedores ; vendedor++)   // recorro la columna
            {
                  printf("\n >-- Cargar Ventas Diarias --<  [ %d] [ %d] =  ",dia,vendedor);
                  scanf("%d", &nroVentas [dia][vendedor]);
            }
      }

      //Muestro la matriz
      printf("\n Datos de la matriz");

      for( dia=0 ; dia < dias ; dia++) // fila
      {
            printf("\n");  //asi armo el cuadrado de la matriz. Bajo un renglon
            for( vendedor=0 ; vendedor<vendedores ; vendedor++)
            {
                  printf("\t %d ", nroVentas [dia][vendedor]);
            }
      }

      //Acumulo las ventas
      for( dia=0 ; dia < dias ; dia++)   // recorro la fila
      {
            for( vendedor=0 ; vendedor<vendedores ; vendedor++)   // recorro la columna
            {
                  acumPorVendedor [vendedor] += nroVentas [dia] [vendedor];
            }
      }

      //Muestro el promedio de ventas para cada vendedor
      for( vendedor=0 ; vendedor<vendedores ; vendedor++)   // recorro la columna
      {
            printf("\n El vendedor %d hizo %.2f ventas \n \n  ", vendedor, acumPorVendedor [vendedor] / dias);


      }
      system("pause");
      return 0;
}
