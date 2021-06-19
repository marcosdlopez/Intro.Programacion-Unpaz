#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*LE AGREGUE SLEEP PORQUE ME PARECIO INTERESANTE EL TIEMPO DEL PROGRAMA */
/*EJERCICIO 2
Utilizando funciones.
Cargar un vector de 10 posiciones con números enteros. Utilizando un menú realiza lo siguiente:
1- Cargar el vector
2- Calcular el promedio de los números pares. Por pantalla mostrar los números pares y su promedio.
3- Desplegar por pantalla los valores cargados en el vector*/


void cargaVector(int vector[10]){
	int a;
	printf("Ingrese 10 numeros:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		vector[i]=a;
	}
	system("cls");
}

void Promedio(int vector[10]){
	int a=0,con=0;
	for(int i=0;i<10;i++){
		if(vector[i]%2==0){
	    a+=vector[i];
		con++;
		printf("Posicion N%d - %d\n",i+1,vector[i]);
		}
	}
	printf("el promedio es %.2f:",(float)a/con);
      Sleep(5000);
	system("cls");

}
void Mostrar(int vector[10]){
	for(int i=0;i<10;i++){
		printf("Posicion N%d - %d\n",i+1,vector[i]);

	}
    Sleep(10000);
	system("cls");

}


int main(int argc, char *argv[]) {
	int vector[10],c;

    do{
		printf("\n <--- MENU --- > \n1- Cargar Vector\n2- Promedio de pares \n3- Mostrar vector \n4- Salir\n");
		c=getchar();
		switch(c){
			case'1': cargaVector(vector);
			break;
			case '2' : Promedio(vector);
			break;
			case '3': Mostrar(vector);
			break;
			default : break;
		}

    system("cls");

    }while(c != 4);
	return 0;

}
