#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 26/10/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */
int primo_es(int n);/*Prototipo de funcion*/
int pot(int b, int e);


int main() {
	
	/*Activdad 1*/
	
	int primo=0; /*Se establece la variable entera para el numero primo*/
	printf("Programa que dado un numero entero mayor que cero usando una funcion identifique si es un numero primo\n");
	printf("Introduzca el numero\n"); /*Se introduce el numero*/
	scanf("%d", &primo);
	primo=primo_es(primo);
	if(primo==0){
		printf("El numero no es primo\n");
	} else{
		printf("EL numero es primo\n");
	}
		
		
		/*Actividad2*/
	
	int B=0, E=0, z=0;
	
 printf("Programa que calcule la potencia de un numero usando una funcion\n");
 printf("Deme el numero que quiere elevar\n");
 scanf("%d", &B);
 printf("A que potencia quiere elevar el numero?\n");
 scanf("%d", &E);
 z=pot(B,E);
 printf("La potencia de ese numero es:\n %d", z);
 return 0;
 
		
	
	}
	int primo_es(int n){
		 int i=0, sum=0;
		 if(n==1){
		 	return n;
		 }
		for(i=1;i<=n;i++){
	
	if ((n%i)==0){
		sum=sum+i;
		}
		}
		
		
		if (sum==n+1){
			n=1;
		} else {
		n=0;}
		return n;
	}
	
	int pot( int b, int e){
		int i=0,x=1;
		for(i=1;i<=e;i++){
			x=b*x;
			
		}
		return x;
	}
	
	
