#pragma once
#include "dependies.h"
class Home_pet
{protected:
	char* name;
	char* spec;
	int years;
public:
	Home_pet(const char*name,const char*spec,int year);//done
	virtual void show_Info();//done
	virtual ~Home_pet();//done

};

class Dog: public Home_pet{
	char* voice;
public:
	Dog(const char* name, const char* spec, int year);
	virtual void show_Info();
	~Dog();
};
class Cat : public Home_pet {
	char* voice;
public:
	Cat(const char* name, const char* spec, int year);
	virtual void show_Info();
	~Cat();
};
class Parrot : public Home_pet {
	char* voice;
public:
	Parrot(const char* name, const char* spec, int year);
	virtual void show_Info();
	~Parrot();
};

