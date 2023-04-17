//Cat.h
//Joseph Williams 
//J00692590
//The main file is CatListDriver.cpp

#pragma once
#include<string>

//Some credit from class and point.h from canvas files	
class Cat
{
private:
	std::string firstname;
	std::string lastname;
	int age;

public:
	Cat();
	Cat(std::string fname, std::string lname, int ageCat);

	void showCat();
	std::string getfirstname();
	std::string getlastname();
	int getAge() const;
	void setfirstname(std::string fname);
	void setlastname(std::string lname);
	void setage(int ageCat);
};



