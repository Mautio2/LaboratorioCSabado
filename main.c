#include <stdio.h>
#include <conio.h>

/* *Autor: Jesus Mauricio Guajardo Ceballos
   *Fecha:12/09/2019
   *Grupo:008
   *Horario:Sabados 9am- 11am
   *Matricula:1661852
   */

   /*ACTIVIDAD1*/

int main() {
int n=0;
printf("\nDame el valor de la nota: \n");
scanf("%d", &n);
if(5<=n && n<=10){
printf("\nAPTO\n");
}
else{
if(0<=n && n<=5){
printf("\nNO APTO\n");
}
else{
printf("\nERROR\n");
}
}



   /*ACTIVIDAD2*/


int dia=0;
printf("\nDame el numero del dia: \n");
scanf("%d",  &dia);
switch(dia){
case 1:
printf("\nLunes dia %d", dia);
break;
case 2:
printf("\nMartes dia %d", dia);
break;
case 3:
printf("\nMiercoles dia %d", dia);
break;
case 4:
printf("\nMJueves dia %d", dia);
break;
case 5:
printf("\nMViernes dia %d", dia);
break;
case 6:
printf("\nSabado dia %d", dia);
break;
case 7:
printf("\nDomingo dia %d", dia);
break;
default:
printf("\nERROR:Dia incorrecto\n");
}


 /*ACTIVIDAD Extra*/

 int menu;
 printf("\nSeleccione una opcion: ");
 scanf("%d", &menu);
 switch(menu){
  case 1:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  case 2:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  case 3:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  case 4:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  case 5:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  case 6:
  printf("\nsted escogio la opcion: %d", menu);
  break;
  case 7:
  printf("\nUsted escogio la opcion: %d", menu);
  break;
  default:
  printf("\nEsa opcion no esta disponible");
 }
 return 0;

}
