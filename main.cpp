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

	int i,j;
	int nrows=2;
	int ncolumns=3;
	int ma[nrows][ncolumns]={{2,7,3},{1,5,4}};
	int ma_t[ncolumns][nrows];
	std::cout<<"Hello Git!"<<std::endl;


	// Print Matrix
	std::cout<<"Matrix \n";
	for (i=0;i<nrows;i++){
		for (j=0;j<ncolumns;j++){
			std::cout<<ma[i][j];
		}
		std::cout<<'\n';
	}
	
	// Transpose
	for (i=0;i<nrows;i++){
		for (j=0;j<ncolumns;j++){
			ma_t[j][i]=ma[i][j];
		}
	}
	// Print Transpose
	std::cout<<"Transpose Matrix \n";
	for (i=0;i<ncolumns;i++){
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

