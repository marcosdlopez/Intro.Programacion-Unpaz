#include <stdio.h>
#include <stdlib.h>

int main()
{
    int antiguedad, valorhora, horastrabajadas;
    char nombre[10], apellido[10];
    float descuento=0, subtotal=0, plus=0, bruto=0, netoacobrar=0;
    //s-->string
    printf("Ingrese el nombre del empreado:\n");
    scanf("%s", &nombre);
    scanf("%s", &apellido);
    fflush(stdin);
    printf("Ingrese la antiguedad del empleado:\n");
    scanf("%d", &antiguedad);
    printf("Ingrese la cantidad de horas trabajadas en el mes:\n");
    scanf("%d", &horastrabajadas);
    printf("ingrese el valor hora de un empleado:\n");
    scanf("%d", &valorhora);

    plus=antiguedad*30;
    bruto=valorhora*horastrabajadas;
    subtotal=bruto+plus;
    descuento=13*subtotal/100;
    netoacobrar= subtotal-descuento;


    printf("\t\tRECIBO DE SUELDO DE\n");
    printf("\t\t %s %s \n\n", nombre, apellido);
    printf("\t los años de antiguedad son: %d, y el plus es de %.2f\n", antiguedad, plus);
    printf("\t el valor hora es de: %d\n", valorhora);
    printf("\t total a cobrar en bruto es de %.2f\n", bruto);
    printf("\t los descuentos realizados son de: %.2f\n", descuento);
    printf("\t El valor neto a cobrar es de: %.2f\n", netoacobrar);


    system("pause");
    return 0;
}
