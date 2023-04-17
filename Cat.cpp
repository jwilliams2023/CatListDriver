//Cat.cpp
//Joseph Williams 
//J00692590
//The main file is CatListDriver.cpp


#include "Cat.h"
#include <iostream>

// CREDIT from canvas point.cpp
Cat::Cat() :firstname("kaia"), lastname("Williams"), age(1) {}
Cat::Cat(std::string fname, std::string lname, int ageCat) : firstname{ fname }, lastname{ lname }, age{ ageCat } {}
void Cat::showCat() {
	std::cout << "(" << firstname << ", " << lastname << ", " << age << ")" << std::endl;
}
std::string Cat::getfirstname() { return firstname; } // getter functions
std::string Cat::getlastname() { return lastname; }
int Cat::getAge() const { return age; }
void Cat::setfirstname(std::string fname) { this->firstname = fname; } // setter functions
void Cat::setlastname(std::string lname) { this->lastname = lname; }
void Cat::setage(int ageCat) { this->age = ageCat; }
