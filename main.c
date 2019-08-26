#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Jesus Mauricio Guajardo Ceballos
*Fecha: 25/08/2019
*grupo:008
*Horario: Sabado 9am-11am
*Matricula:1661852
*/

int main(int argc, char *argv[]) {
    float x,Calculo1, Calculo2, Calculo3, Calculo4;
    printf("\nDame el valor de x:");
    scanf("%f", &x);
    Calculo1=((x-1)/4)-((x-5)/36);
    printf("El resultado de el primer calculo es; %.2f\n", Calculo1);
    Calculo2= 6*(((x+1)/8)-((2*x-3)/16));
    printf("El resultado de el segundo calculo es; %.2f\n", Calculo2);
    
return 0;
}

