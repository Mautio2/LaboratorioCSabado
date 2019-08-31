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
	printf("\n----------------------------------------------\n");
	a=5; b=3;
	int c=-12;
	printf("Programa que declare 3 variables de tipo entero y determine si se cumplen las condiciones");
	//a)
	printf("\n++++++++++++++++++++++++");
	printf("\na) ");
	if (a>3){
		printf("a es mayor a 3");
	}
	else {
		printf("a es menor o igual a 3");
	}
	//b)
	printf("\nb) ");
	if (a>c){
	    printf("a es mayor a c");}
	else{
		printf("a es menor o igual a c ");
	}
	//c)
	printf("\nc) ");
	if (b!=c){
		printf("b es diferente de c");
	}
	else{
		printf("b es igual a c");
	}
	//d)
	printf("\nd) ");
	if (a==3){
		printf("a es igual a 3");
	}
	else{
		printf("a es diferente a 3");
	}
	//e)
	printf("\ne) ");
	if (a*b==15){
		printf("El producto entre a y b es 15");
	}
	else{
		printf("El producto entre a y b no es 15");
	}
	//f)
	printf("\nf) ");
	if ((c/b)>a){
		printf("El cociente de c entre b es mayor a a");
	}
	else{
		printf("El cociente de c entre b es menor a a");
	}//g)
	printf("\ng) ");
	if ((c/b)==-10){
		printf("El cociente entre c y b es igual a -10");
	}
	else{
		printf("El cociente entre c y b es diferente a -10");
	}
	//h)
	printf("\nh) ");
	if (a+b+c==5){
		printf("La suma de a,b y c es igual a 5");
	}
	else{
		printf("La suma de a,b y c es diferente a 5");
	}
	//i)
	printf("\ni) ");
	if (((a+b)==8)&&((a-b)==2)){
		printf("La suma de a y b es igual a 8 y la resta a y b es igual a 2");
	}
	else{
		printf("La suma de a y b no es 8 o la resta de a menos b es 2");
	}
	//j)
	printf("\nj) ");
	if ((a+b)==8||(a-b==6)){
		printf("La suma de a y b es igual a 8 o la resta de a menos b es 6");
	}
	else{
		printf("La suma de a y b no es 8 y la resta de a menos b no es 6");
	}
	//o)
	printf("\no) ");
	if (a>3&&b>3&&c<3){
		printf("a es mayor a 3, b es mayor a 3 y c es menor que 3");
	}
	else{
		printf("a es menor o igual a 3, b es menor o igual a 3 o c es mayor igual a 3 ");
	}
	printf("\n++++++++++++++++++++++++");
	//***
	//ACT EXTRA
	printf("\n\n----------------------------------------------");
	printf("\nPrograma que declare 3 variables de tipo entero y determine si se cumplen las condiciones");
	printf("\nPrimero ingrese el valor de las 3 variables: ");
	printf("\nIngrese el valor de la variable a: ");
	scanf("%d", &a);
	printf("Ingrese el valor de la variable b: ");
	scanf("%d", &b);
	printf("Ingrese el valor de la variable c: ");
	scanf("%d", &c);
	//a)
	printf("++++++++++++++++++++++++");
	printf("\na) ");
	if (a>3){
		printf("a es mayor a 3");
	}
	else {
		printf("a es menor o igual a 3");
	}
	//b)
	printf("\nb) ");
	if (a>c){
			printf("a es mayor a c");}
	else{
		printf("a es menor o igual a c ");
	}
	//c)
	printf("\nc) ");
	if (b!=c){
		printf("b es diferente de c");
	}
	else{
		printf("b es igual a c");
	}
	//d)
	printf("\nd) ");
	if (a==3){
		printf("a es igual a 3");
	}
	else{
		printf("a es diferente a 3");
	}
	//e)
	printf("\ne) ");
	if (a*b==15){
		printf("El producto entre a y b es 15");
	}
	else{
		printf("El producto entre a y b no es 15");
	}
	//f)
	printf("\nf) ");
	if ((c/b)>a){
		printf("El cociente de c entre b es mayor a a");
	}
	else{
		printf("El cociente de c entre b es menor a a");
	}//g)
	printf("\ng) ");
	if ((c/b)==-10){
		printf("El cociente entre c y b es igual a -10");
	}
	else{
		printf("El cociente entre c y b es diferente a -10");
	}
	//h)
	printf("\nh) ");
	if (a+b+c==5){
		printf("La suma de a,b y c es igual a 5");
	}
	else{
		printf("La suma de a,b y c es diferente a 5");
	}
	//i)
	printf("\ni) ");
	if (((a+b)==8)&&((a-b)==2)){
		printf("La suma de a y b es igual a 8 y la resta a y b es igual a 2");
	}
	else{
		printf("La suma de a y b no es 8 o la resta de a menos b es diferente 2");
	}
	//j)
	printf("\nj) ");
	if ((a+b)==8||(a-b==6)){
		printf("La suma de a y b es igual a 8 o la resta de a menos b es 6");
	}
	else{
		printf("La suma de a y b no es 8 y la resta de a menos b no es 6");
	}
	//o)
	printf("\no) ");
	if (a>3&&b>3&&c<3){
		printf("a es mayor a 3, b es mayor a 3 y c es menor que 3");
	}
	else{
		printf("a es menor o igual a 3, b es menor o igual a 3 o c es mayor o igual a 3 ");
	}
	printf("\n++++++++++++++++++++++++\n\n");
	system("pause");
	return 0;
}
