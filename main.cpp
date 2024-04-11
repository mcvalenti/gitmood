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
	It has a few options, it is not direct. 
	We are presenting the one wich passes ncolum as argument. 
	TO DO: passing a 2D Array as an argument using a single pointer
	*/

	// Passing 2D Array with only the Number of Columns
	int i,j;
	int nrows=2;
	int ncol=3;
	int ma[][3]={{2,7,3},{1,5,4}};
	int ma_t[3][2];
	
	std::cout<<"Hello Git!"<<std::endl;


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


	/* 
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
	
	return 0;
	
}

