/*
 * functions.h
 *
 *  Created on: 6 abr. 2024
 *      Author: ceci
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_



void interchange(int& a, int& b);
int array_sum(int* vec, int elements);
void transpose_matrix(int ma[][3], int nrows, int ncol, int ma_t[][2]);
void print_matrix(int** table, int nrows, int ncols);
void transpose_tt(int** table, int nrows, int ncols, int** table_t);




#endif /* FUNCTIONS_H_ */
