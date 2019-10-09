#include <stdio.h>
#include <stdlib.h>

/* *Autor:Jesus Mauricio Guajardo Ceballos
   *Fecha: 08/10/2019
   *grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
    */

int main() {
	
/*Actividad 1*/
printf("\nPrograma que defina un arreglo de tres dimensiones para una compañia de ventas");
int ventasEmpleadoOficinaEdificio[6][10][2]; /*Se difine el arreglo entero de tres dimensiones*/
ventasEmpleadoOficinaEdificio[2][6][1]=4234; /*Se define la casilla 3,7,2 igual a 4234*/
printf("\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d unidades\n\n", ventasEmpleadoOficinaEdificio[2][6][1]);
/*Se imprime la casilla 3,7,2*/

/* a)Cuantos elementos componen el arreglo tridimensiional? R=120 elementos
b) Que ocurre si intentamos mostrar por pantalla un valor con un indidce que no este  definido por ese array muldimiensional? 
R= Se imprime eñ valor que estaba ocupando el espacio de memoria antes de que yo creara el arreglo*/
int i,j,k;
	for(i=0;i<6;i++){
		for(j=0;j<10;j++){
			for(k=0;k<2;k++){
				printf("\n %d", ventasEmpleadoOficinaEdificio[i][j][k]);
			}}} /*Para comprobar b)*/
			
/*Actividad2*/
printf("\nPrograma que utilice el programa anterior y modifique el valor de productos vendidos mas diez");
ventasEmpleadoOficinaEdificio[2][6][1]+=10;/*Se toma el valor anterior de esa casilla y se le suma 10*/
printf("\nEl empleado numero 3 de la oficina 7 del edificio numero 2 ha vendido %d undidades", ventasEmpleadoOficinaEdificio[2][6][1]);
/*Se imprime el nuevo valor de la casilla 3,7,2*/


	return 0;
}
