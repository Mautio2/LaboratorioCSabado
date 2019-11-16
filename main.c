#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Actividad1
char cuantum[20];
FILE *fp;
	fp = fopen ( "goto1.txt", "r" );
FILE *fp1;
	fp1 = fopen ( "archivo_alrevez.txt", "w" ); 
	fgets(cuantum,20,fp);
	
	//Escribir en el archivo
	fprintf(fp1, "%s", cuantum);
	return 0;
	
}


