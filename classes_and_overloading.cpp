/*
 * classes_and_overloading.cpp
 *
 *  Created on: 27 abr. 2024
 *      Author: ceci
 */


#include<iostream>
#include "classes_and_overloading.h"

std::ostream &operator << (std::ostream &output, Person &p){
	output<<"Lets itroduce ourselves ... "<<std::endl;
	output<<"My name is "<< p.name << " and I am " << p.age << std::endl;
	return output;
}

std::istream &operator >> (std::istream &input, Person &p){
	input>>p.name>>p.age;
	return input;
}
