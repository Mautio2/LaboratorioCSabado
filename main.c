#include <stdio.h>
#include <stdlib.h>

/* *Autor: Jesus Mauricio Guajardo Ceballos
   *Fecha: 21/09/2019
   *grupo: 008
   *Horario Sabados 9am-11am
   *Matricula:1661852
*/ 

int main() {
	
	/* ACTIVIDAD1 */
	
	printf("Programa que pida la calificacion de 10 alumnos y determine si aprobaron o reprobaron \n\n");
	int i=0;
	float cal=0, Sum=0, prom=0;
	for(i=1; i<11; i++){
		printf("Dame la calificacion del alumno %d: ", i);
		scanf("%f", &cal);
		Sum=Sum+cal;
	}
	/*Use el for para ciclar la toma de las calificaciones*/
	prom=Sum/i;
	printf("El promedio es %f", prom);
	if(prom>=7){
		printf("\n\tAPROBADO\n\n ");		
	} else {
		printf("\n\tREPROBADO\n\n ");
	}
	/*Use el if-else para determinar si el promedio era aprobatorio o no*/
	
	
	
	
	/*ACTIVIDAD2 */
	printf("Programa que calcule la potencia de un numero \n\n");	
	int base=0, exponente=0, potencia=1;
	i=0;
	printf("Dame una numero entero: ");
	scanf("%d", &base);
	printf("A que potencia le gustaria elevar ese numero?:");
	scanf("%d", &exponente);
	for(i=0; i<exponente; i++){
	
	potencia=potencia*base;
}

	printf("La potencia es: %d", potencia);
	/*Con el uso del ciclo for calcule la potencia de un numero, gracias a un contador i acotandolo con el exponente introducido por el usuario*/
	return 0;
}
