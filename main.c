#include <stdio.h>
#include <stdlib.h>

/* *Autor: Jesus Mauricio Guajardo Ceballos
*Fecha: 31/08/2019
*grupo:008
*Horario: Sabado 9am-11am
*Matricula:1661852 */

int main(int argc, char *argv[]) {
	//***
	// Act1	
	int a=0, b=0;
	printf("Programa que determinar el mayor de dos numeros");
	printf("\nDame el primer numero: ");
	scanf("%d", &a);
	printf("\nDame el segundo numero: ");
	scanf("%d", &b);
	if (a>b) {
		  printf("\n %d es mayor a %d", a,b);}
	else     {
		  printf("\n %d es mayor a %d", a,b);}
	printf("\n\n");
	// Act2
	a=5; b=3;
	int c=-12;
	printf("Programa que declare 3 variables de tipo entero y determine si se cumplen las condiciones");
	//a)
	printf("\n++++++++++++++++++++++++");
	printf("\na)\n");
	if (a>3){
		printf("a es mayor a 3");
	}
	else {
		printf("a es menor o igual a 3");
	}
	//b)
	printf("\n++++++++++++++++++++++++");
	printf("\nb)\n");
	if (a>c){
	    printf("a es mayor a c");}
	else{
		printf("c es menor o igual a c ");
	}
	//c)
	printf("\n+++++++++++++++++++++++++");
	printf("\nc)\n");
	if (b!=c){
		printf("\nb es diferente de c");
	}
	else{
		printf("\nb es igual a c");
	}
	//d)
	printf("\n+++++++++++++++++++++++++");
	printf("\nd)\n");
	if (a==3){
		printf("\na es igual a 3");
	}
	else{
		printf("\na es diferente a 3");
	}
	//f)
	printf("\n+++++++++++++++++++++++++");
	printf("\nf)\n");
	if ((c/b)>a){
		printf("\nEl cociente de c entre b es menor a a");
	}
	else{
		printf("\nEl cociente de c entre b no es menor a a");
	}//g)
	printf("\n+++++++++++++++++++++++++");
	printf("\ng)\n");
	if ((c/b)==-10)){
		printf("\nEl cociente entre c y b es igual a -10");
	}
	else{
		printf("\nEl cociente entre c y b es diferente a -10");
	}
	//h)
	printf("\n+++++++++++++++++++++++++");
	printf("\nh)\n");
	if (a+b+c==5){
		printf("\nLa suma de a,b y c es igual a 5");
	}
	else{
		printf("\naLa suma de a,b y c es diferente a 5");
	}
	//i)
	printf("\n+++++++++++++++++++++++++");
	printf("\ni)\n");
	if ((a+b==8)&&){
		printf("\na es igual a 3");
	}
	else{
		printf("\na es diferente a 3");
	}
	//j)
	printf("\n+++++++++++++++++++++++++");
	printf("\nj)\n");
	if (a==3){
		printf("\na es igual a 3");
	}
	else{
		printf("\na es diferente a 3");
	}
	//o)
	printf("\n+++++++++++++++++++++++++");
	printf("\no)\n");
	if (a==3){
		printf("\na es igual a 3");
	}
	else{
		printf("\na es diferente a 3");
	}
	system("pause");	
	return 0;
}
