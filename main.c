#include <stdio.h>
#include <stdlib.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 12/10/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */

int main() {
	
	/*Activdad 1*/
	
	char cadena1[6]; /*Se establece la cadena de caracteres*/
	printf("Programa que identifique si una cadena de caracteres es un palindromo\n");
	printf("Introduzca el primer caracter:\n"); /*Se introducen los valores de la cadena uno a uno*/
	scanf("%c", &cadena1[0]);
	printf("\nIntroduzca el siguiente caracter:\n");
	fflush(stdin); /*se utiliza esta funcion para limpiar el buffer*/
	scanf("%c", &cadena1[1]);
	printf("Introduzca el siguiente caracter:\n");
	fflush(stdin);
	scanf("%c", &cadena1[2]);
	printf("Introduzca el siguiente caracter:\n");
	fflush(stdin);
	scanf("%c", &cadena1[3]);
	printf("Introduzca el siguiente caracter:\n");
	fflush(stdin);
	scanf("%c", &cadena1[4]);
	printf("Introduzca el siguiente caracter:\n");
	fflush(stdin);
	scanf("%c", &cadena1[5]);
	/*Se compara cada uno de los elementos, si si cumple la condicion entonces es palindromo*/
	if (cadena1[0]==cadena1[5]&&cadena1[1]==cadena1[4]&&cadena1[2]==cadena1[3]){
	
		
			printf("La cadena de caracteres %c%c%c%c%c%c es un palindromo \n" , cadena1[0], cadena1[1], cadena1[2], cadena1[3], cadena1[4], cadena1[5]);
		}
		else {
			printf("La cadena de caracteres %c%c%c%c%c%c no es un palindromo \n" , cadena1[0], cadena1[1], cadena1[2], cadena1[3], cadena1[4], cadena1[5]);
		
		} /*Se imprimen resultados depnendiendo del caso*/
	
		
	
	/*Actividad 2*/
	
	printf(" Programa que calcule cuantas letras  se repiten en un arreglo de 20 caracteres\n");
	char cadena2[20]; /*Se establece cadena de caracteres*/
	int i=0; /*contador para los caracteres*/
	int j=0; /*contador para los contadores y las letras del abecedario*/
	int contador[26]={0};
	char letras[26]="abcdefghijklmnopqrstuvwxyz"; /* Se usan todas letras del abcedario para facilitar el prohgrama*/
		printf("Ingresa 20 letras:\n");
	fflush(stdin); /*se utiliza esta funcion para limpiar el buffer*/
	gets(cadena2);/*Se introducen todos los caracteres*/
	/*ciclo for externo*/
	for(j=0;j<26; j++){
	/*Ciclo interno*/
	for(i=0; i<20; i++){

	if(cadena2[i]==letras[j]){ contador[j]++; /*conficional para comparar cada una de las letras en el arreglo y contar cuantas se repiten*/
	}
}
}
/*ciclo for para imprimir*/
for(j=0;j<26;j++){

printf("\n%c: %d", letras[j], contador[j]);}

return 0;
}
