/*
 * main.cpp
 * =======================================================
 *  Project used to test different git and github facilies
 * =======================================================
 *  Created on: 6 abr. 2024
 *      Author: ceci
 */

#include<iostream>
#include"functions.h"


int main(){
	/*
	---------------------------------------------------
	Passing a 2D Array to function
	---------------------------------------------------
	1) using static arrays
	2) usign dynamic arrays
	*/

	// Passing 2D Array with only the Number of Columns
	int i,j;
	int vec[]={1,2,3,4};
	int nrows=2; // can be defined or as user input
	int ncols=3;
	
	std::cout<<"Hello Git!"<<std::endl;
	std::cout<<"Suma del vector: "<<array_sum(vec, sizeof(vec)/sizeof(int))<<std::endl;

	int** table = new int*[nrows];
	for(i=0;i<nrows;i++){
		table[i]= new int[ncols];
	}

	int** table_t = new int*[ncols];
	for(i=0;i<ncols;i++){
		table_t[i]= new int[nrows];
	}

	for (i=0; i<nrows; i++){
		for (j=0; j<ncols; j++){
			std::cout << "Introduce element: ["<<i<<j<<"]";
			std::cin >> table[i][j];
		}
	}

	print_matrix(table, nrows, ncols);
	transpose_tt(table,nrows, ncols, table_t);
	print_matrix(table_t, ncols, nrows);


	// Free memory
	for (i=0; i<nrows; i++){
		delete [] table[i];
	}

	delete [] table;
	table=NULL;

	for (i=0; i<ncols; i++){
		delete [] table_t[i];
	}

	delete [] table_t;
	table_t=NULL;

	return 0;

}

	/*
	// ---------------------------------------------------
	// Transpose matrix (static memory)
	// ---------------------------------------------------
	int i,j;
	int nrows=2;
	int ncol=3;
	int ma[][3]={{2,7,3},{1,5,4}};
	int ma_t[3][2];
	// Print Matrix
	std::cout<<"Matrix \n";
	for (i=0;i<nrows;i++){
		for (j=0;j<ncol;j++){
			std::cout<<ma[i][j];
		}
		std::cout<<'\n';
	}
	// Transpose
	transpose_matrix(ma, nrows, ncol, ma_t);
	// Print Transpose
	std::cout<<"Transpose Matrix \n";
	for (i=0;i<ncol;i++){
		for (j=0;j<nrows;j++){
			std::cout<<ma_t[i][j];
		}
		std::cout<<'\n';
	}

	// ---------------------------------------------------
	Interchange scenario
	// ---------------------------------------------------
	int a=2;
	int b=0;
	std::cout<<" a value before interchange: " << a << std::endl;
	std::cout<<" b value before interchange: " << b << std::endl;
	std::cout<<" --------------------------" << std::endl;
	interchange(a,b);
	std::cout<<" a value after interchange: " << a << std::endl;
	std::cout<<" b value after interchange: " << b << std::endl;*/
	


