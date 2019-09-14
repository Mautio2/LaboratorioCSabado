#include <stdio.h>
#include <conio.h>
#include <math.h>

/* *Autor: Jesu Mauricio Guajardo Ceballos
   *Fecha:14/09/2019
   *Grupo:008
   *Horario: Sabados 9am-11am
   *Matricula:1661852
   */
  
   int main ()
   /*ACTIVIDAD 1*/
{  int  x=0, r=0, SUM=0;
   printf("Introduzca un numero entero: ");
   scanf("%d", &x);
   SUM=x;
   printf("Desea introducir otro numero entero SI=1 NO=0\n");
   scanf("%d", &r);s
   while(r==1){
   printf("Deme el numero:");
   scanf("%d", &x);
   SUM=x+SUM;
   printf("Desea introducir otro numero enteroSI=1 NO=0\n");
   scanf("%d", &r);
}
   printf("La suma de los numeros es %d\n", SUM);
   
   /*ACTIVIDAD 2*/
   
   int s=0;
   while(s<=100)
   { printf("\nDame un numero entero: ");
   scanf("%d", &s);
    printf("%d", s);
   }
   
   
   
   

return 0;

}
