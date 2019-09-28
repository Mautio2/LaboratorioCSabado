#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 28/09/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */

int main()
/*ACTIVIDAD1*/
 { int numeroDeCoches[24]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}; /*determino el arrelo unidimensional con 24 numeros enteros */
   int R=2;                                                       /*Declaro un entero R, para determinar las horas que representara el indice de mi arreglo*/
   printf("Programa que  forme un arreglo de 24 numeros que muestre la cantidad y deterimine su hora\n\n");
   numeroDeCoches[R]=57;                                          /*Determino el valor de la casilla R*/
   printf("En la hora %d hay %d coches\n", R, numeroDeCoches[R]); /*Se imprime el numero de coches a la hora R*/
   R=21;                                                          /*Se cambia el valor de R a 21*/
   numeroDeCoches[R]=57;                                          /*Determino el valor de la casilla R*/
   printf("En la hora %d hay %d coches\n", R, numeroDeCoches[R]); /*Se imprime el numero de coches a la hora R*/
   
   
   /*ACTIVIDAD2*/
   int A=8, B=4;                                                 /*Declaro dos variables A y B , y las igualo a 8 y 4 respectivamente*/
   printf("\nPrograma basado en el anterior que muestre la hora como el cociente de dos numeros\n\n");
   R=A/B;                                                        /*se iguala la R al cociente entre A y B*/
   numeroDeCoches[R]=57;                                         /*Determino el valor de la casilla R*/
   printf("En la hora %d hay %d coches\n", R, numeroDeCoches[R]);/*Se imprime el numero de coches a la hora R*/
   
   
	return 0; /*fin del programa*/
}

