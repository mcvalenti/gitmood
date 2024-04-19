/*
 * functions.cpp
 *
 *  Created on: 6 abr. 2024
 *      Author: ceci
 */
#include <iostream>
#include "functions.h"


void interchange(int& a, int& b){
	int aux;
	aux = b;
	b = a;
	a = aux;
}

int array_sum(int* vec, int elements){
	int i;
	int suma=0;
	for (i=0; i<elements; i++){
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


void print_matrix(int** table, int nrows, int ncols){
	int i,j;
	for (i=0;i<nrows;i++){
		for(j=0;j<ncols;j++){
			std::cout<<table[i][j];
			}
		std::cout<<"\n";
		}
	}

void transpose_tt(int** table, int nrows, int ncols, int** table_t){
	int i,j;

	for (i=0;i<nrows;i++){
		for (j=0;j<ncols;j++){
			table_t[j][i]=table[i][j];
		}
	}
	}

