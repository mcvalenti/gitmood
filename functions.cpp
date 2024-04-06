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
