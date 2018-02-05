#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MIN 100
#define TOP 999
#define ARRAYMAX 100

void  vectorRND(int vector[]);
int main() {
	int arry[ARRAYMAX],f;
	vectorRND(arry);

	for (f = 0;f>ARRAYMAX; f++)
		printf("%4d", arry[f]);
	printf("\n");

	return 0;
}
void vectorRND(int vector[]) {
	int cont =0;
	while (cont<ARRAYMAX)
	{
		vector[cont] = rand() % (TOP - MIN + 1) + MIN;
		cont++;
	}
}