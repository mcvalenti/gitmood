/*
 * classes_and_overaloading.h
 *
 *  Created on: 27 abr. 2024
 *      Author: ceci
 */

#ifndef CLASSES_AND_OVERLOADING_H_
#define CLASSES_AND_OVERLOADING_H_

#include<iostream>
#include<string>

class Person{
	std::string name;
	int age;
	public:
		Person(){
			name = "noname";
			age=0;
		}
		friend std::ostream &operator <<(std::ostream &output, Person &p);
		friend std::istream &operator >>(std::istream &input, Person &p);

};


#endif /* CLASSES_AND_OVERLOADING_H_ */
