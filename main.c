#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE_NAME 20
#define SIZE 2
#define TAMA 4

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 09/11/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */


int main() {
	
	/*Actividad 1*/
		int i=0, j=0;
	
	struct picture_info{  /*Se define el arreglo de estructuras y sus atributos*/
	char name[SIZE_NAME];
	int date_time;
} pictures[SIZE], *pictures_apuntador[SIZE]; /*Se define el puntero*/
 
	printf("Programa que guarde e imprima las fotos de un movil, usando punteros y estructuras\n");

	for(i=0;i<SIZE;i++){ /*Se usa un for para llenar el arreglo de estructuras*/
		getchar();
		printf("\n La foto %d", i);
		printf("\n\t Su nombre: ");
		fflush(stdin);
		gets(pictures[i].name);
		printf("\tIngrese la fecha: ");
		scanf("%d", &pictures[i].date_time);
	}

for(i=0;i<SIZE;i++){ /*Se usa un for para llenar el arreglo de apuntadores*/
		pictures_apuntador[i] = &pictures[i];
	}
for(i=0;i<SIZE;i++){
		printf("Foto\n\t%s %d\n", pictures_apuntador[i]->name, pictures_apuntador[i]->date_time);/*Se imprimen los apuntadores*/
	}

/*Actividad2*/		
	struct cordenadas /*Se define el arreglo de estructuras y sus atributos*/
	
{ int latitude;
  int longitude;
} places[TAMA], *a_latitude[TAMA], *a_longitude[TAMA], *aux;
   printf("Programa que determine las coordenadas de ciertos lugares y los ordene de ciertas maneras");
	for(i=0;i<TAMA;i++){ /*Se usa un for para llenar el arreglo de estrcucturas*/
		printf("\n 	Dame la latitud:%d", i);
		scanf("%d", &places[i].latitude);
		printf("\n 	Dame la longitud:%d", i);
		scanf("%d", &places[i].longitude);
	}
	
	for(i=0;i<TAMA;i++){
		a_latitude[i] = &places[i];/*Se usa el ordenamiento de bubble sort para ordenar el arreglo de las latitudes*/
	}
			for(i=0;i<TAMA;i++){ 
		for(j=i+1;j<TAMA;j++){
			if(a_latitude[i]->latitude>a_latitude[j]->latitude){
				aux = a_longitude[i];
				a_latitude[i] = a_latitude[j];
				a_latitude[j] = aux;
			}
		}
	}

for(i=0;i<TAMA;i++){
		a_longitude[i] = &places[i]; /*Se usa el ordenamiento de bubble sort para ordenar el arreglo de las laongitudes*/
	}
		for(i=0;i<TAMA;i++){
		for(j=i+1;j<TAMA;j++){
			if(a_longitude[i]->longitude>a_longitude[j]->longitude){
				aux = a_longitude[i];
				a_longitude[i] = a_longitude[j];
				a_longitude[j] = aux;
			}
		}
	}

	
	/* Se imprime el Orden original*/
	printf("\nCoordenadas en su orden original:");
	for(i=0;i<TAMA;i++){
		printf("\nLatitud: %d\tLongitud: %d", places[i].latitude, places[i].longitude);
	}
	

	/*Se imprime el Orden por latitud*/
	printf("\n\nCoordenadas ordenadas por latitud:");
	for(i=0;i<TAMA;i++){
		printf("\nLatitud: %d\tLongitud: %d", a_latitude[i]->latitude, a_latitude[i]->longitude);
	}

	/* Finalmente se imrime el Orden por longitud*/
	printf("\n\nCoordenadas ordenadas por longitud:");
	for(i=0;i<TAMA;i++){
		printf("\nLatitud: %d\tLongitud: %d", a_longitude[i]->latitude, a_longitude[i]->longitude);
	}
	system("pause");
	
	return 0;
}
	

