#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int menorEstricto(int a, int b, int c);

int main() {
	int a, b, c, menor;

	printf("ingrese 3 numeros \n");
	printf("ingrese primer valor \n");
	scanf("%d", &a);
	printf("ingrese segundo valor \n");
	scanf("%d", &b);
	printf("ingrese tercer valor \n");
	scanf("%d", &c);
	printf("el menor de los 3 valores es: %d\n", menorEstricto(a, b, c));
	return 0;
}
int menorEstricto(int a, int b, int c) {
	int menor;
	if (a < b) {
		if (a < c) {
			menor = a;
		}
	}
	if (b < c) {
		menor = b;
	}
	else {
		menor = c;
	}
	return menor;
}
