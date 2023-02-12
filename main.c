/*
 * main.c
 * Resposta do exercício 4 do capítulo 3.
 * Author: Thiago Leite
 */

#define TAMANHO 3
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	double reais[TAMANHO][TAMANHO];

	reais[0][0] = 2.8;
	reais[0][1] = 8.3;
	reais[0][2] = 20.7;
	reais[1][0] = 50.9;
	reais[1][1] = 45.7;
	reais[1][2] = 66.73;
	reais[2][0] = 87.24;
	reais[2][1] = 91.43;
	reais[2][2] = 36.19;

	int i, j;
	double soma = 0.0;
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {
			soma += reais[i][j];
		}
	}

	printf("A soma dos elementos da matriz é %f.", soma);

}
