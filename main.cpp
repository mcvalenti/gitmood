/*
 * main.cpp
 * =======================================================
 *  Project used to test different git and github facilies
 * =======================================================
 *  Created on: 6 abr. 2024
 *      Author: ceci
 */

#include<iostream>

void interchange(int& a, int& b){
	int aux;
	aux = b;
	b = a;
	a = aux;
}

int main(){

	int a=2;
	int b=0;

	std::cout<<"Hello Git!"<<std::endl;
	std::cout<<" a value before interchange: " << a << std::endl;
	std::cout<<" b value before interchange: " << b << std::endl;
	std::cout<<" --------------------------" << std::endl;
	interchange(a,b);
	std::cout<<" a value after interchange: " << a << std::endl;
	std::cout<<" b value after interchange: " << b << std::endl;
	
}

