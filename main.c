#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Actividad1
	char cuantum[100];
	char reversed[100];
	FILE *fp;
	fp = fopen("goto1.txt", "r");
	FILE *fp1;
	fp1 = fopen("archivo_alrevez.txt", "w");
	fgets(cuantum,20,fp);
	int i;
	for(i=0;i<strlen(cuantum);i++){
		reversed[i] = cuantum[strlen(cuantum)-1-i];
	}
	fprintf(fp1, "%s", reversed);


	//Escribir en el archivo
	FILE *fp2;
	FILE *fp3;
	int a, b;
	fp2= fopen ("goto2.txt", "r");
	fp3= fopen ("archivo_de_salida.txt", "w");
	fscanf(fp2, "%d %d", &a, &b);
	fprintf(fp3, "La suma %d y %d es %d",a,b, a+b);
	return 0;

}
