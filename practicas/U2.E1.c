#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100
#include<stdlib.h>
void cargarDatos(int matriz);
int main() {
	int matriz [MAX][MAX];
	printf("ingrese el valor de la matriz\n");
	cargarDatos(matriz);
	return 0;
}

void cargarDatos(int matriz) {
	int valor, a;
	printf("ingrese valores a la columna\n");

	while (valor != -1) {
		printf("ingrese otro valor a la columna// ingrese -1 para ingresar filas -1");
		scanf("%d", & matriz[a][b]);
	}
}