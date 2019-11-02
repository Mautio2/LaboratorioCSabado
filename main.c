#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 02/11/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */

int main() {
	
	/*Activdad 1*/
	
	int j=0;
	char *cad1, cad2[20]; /*Se establece el apuntador y la cadena de caracteres*/
	printf("Programa que mediante una funcion cuente el numero de vocales en una cadena\n");
	printf("Introduzca la cadena de caracteres\n"); 
	fflush(stdin);
	gets(cad2);/*Se introduce la cadena*/
	
	for(cad1=cad2;*cad1!='\0';cad1++) /*Se usa un for para recorrer cada uno de los elementos de la cadena*/
	{ 
		switch (*cad1){ /*switch para contar cada caso de las vocales*/
			case 'a': j++;break;
			case 'e': j++;break;
			case 'i': j++;break;
			case 'o': j++;break;
			case 'u': j++;break;
			}
		}
			
        printf("La cantidad de vocales es: %d\n", j);/*se imprime el contador de las vocales*/
		

		
		
		/*Actividad2*/
	
	int a=0, b=0, S=0;
	int *A, *B;
	
 printf("Programa que sume dos variables de tipo entero usando un apuntador\n");
 printf("Deme el primer numero\n"); /*se piden los numeros*/
 scanf("%d", &a);
 printf("Deme el segundo numero\n");
 scanf("%d", &b);
  A= &a; /*Se apunta a esos valores con los apuntadore*/
  B= &b;
  S=*A+*B; /*Se suman*/
 printf("La suma de los apuntadores es:\n %d", S);/*Se imprime el resultado*/
 return 0;
}

	
