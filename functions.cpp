/*
 * functions.cpp
 *
 *  Created on: 6 abr. 2024
 *      Author: ceci
 */

#include "functions.h"


void interchange(int& a, int& b){
	int aux;
	aux = b;
	b = a;
	a = aux;
}

int array_sum(int* vec){
	int i;
	int suma=0;
	for (i=0; i<2; i++){
		suma += vec[i];
	}
	return suma;
}

void transpose_matrix(int ma[][3], int nrows, int ncol, int ma_t[][2]){
	int i, j;
	for (i=0;i<nrows;i++){
		for (j=0;j<ncol;j++){
			ma_t[j][i]=ma[i][j];
		}
	}
}

