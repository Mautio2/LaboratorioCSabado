#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 26/10/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */
int primo_es(int n);
int pow(int n, int up);

int main() {
	
	/*Activdad 1*/
	
	int primo=0, i=0, sum=0; /*Se establece la variable entera para el numero primo*/
	printf("Programa que dado un numero entero mayor que cero identifique si es un numero primo\n");
	printf("Introduzca el numero\n"); /*Se introduce el numero*/
	scanf("%d", &primo);
	for(i=1;i<=primo;i++){
	
	if ((primo%i)==0){
		sum=sum+i;
		}
		}
		
		
		if (sum==primo+1){
			printf("El numero introducido es un numero primo\n\n");
		}
		return 0;
		
		/*Actividad2*/
		
	
	}
	
	
	
