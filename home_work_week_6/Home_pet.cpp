#include "Home_pet.h"
Home_pet::Home_pet(const char* name, const char* spec, int year) {
	try
	{
		for (int i = 0; i < std::strlen(name); i++)
		{
			if ((name[i] < 65 || name[i] > 90) && (name[i] < 97 || name[i] > 122)) {
				throw 12;
			}
		}

		for (int i = 0; i < std::strlen(spec); i++)
		{
			if ((spec[i] < 65 || spec[i] > 90) && (spec[i] < 97 || spec[i] > 122)&& (spec[i] < 32 || spec[i] > 32) && (spec[i] < 45 || spec[i] > 45)) {
				throw 12;
			}
		}
		if (year > 15 || year <= 0) {
			throw year;
		}
		
	}
	catch (int)
	{
		std::cout << "In name or special not possible insert symbols or numbers.Or home pat cant live more than 15 years\n";
		exit(0);
	}
	this->years = year;
	this->name = new char[std::strlen(name) + 1];
	for (int i = 0; i < std::strlen(name); i++)
	{
		this->name[i] = name[i];
	}
	this->name[std::strlen(name)] = '\0';
	this->spec = new char[std::strlen(spec) + 1];
	for (int i = 0; i < std::strlen(spec); i++)
	{
		this->spec[i] = spec[i];
	}
	this->spec[std::strlen(spec)] = '\0';
}
Home_pet::~Home_pet() {
	delete[]this->name;
	delete[]this->spec;
}
void Home_pet::show_Info() {
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Specific : " << this->spec << std::endl;
	std::cout << "Years : " << this->years << std::endl;
}
Dog::Dog(const char* name, const char* spec, int year) :Home_pet(name,spec,year) {
	const char* point = "Bow-Wow";
	this->voice = new char[std::strlen(point)+1];
	for (int i = 0; i < std::strlen(point); i++)
	{
		voice[i] = point[i];
	}
	voice[std::strlen(point)] = '\0';
}
void Dog::show_Info() {
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Specific : " << this->spec << std::endl;
	std::cout << "Years : " << this->years << std::endl;
	std::cout << "Voice : " << this->voice << std::endl;
}
Dog::~Dog() {
	delete[]voice;
}
Cat::Cat(const char* name, const char* spec, int year) :Home_pet(name, spec, year) {
	const char* point = "Mjaw-Mjaw";
	this->voice = new char[std::strlen(point) + 1];
	for (int i = 0; i < std::strlen(point); i++)
	{
		voice[i] = point[i];
	}
	voice[std::strlen(point)] = '\0';
}
void Cat::show_Info() {
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Specific : " << this->spec << std::endl;
	std::cout << "Years : " << this->years << std::endl;
	std::cout << "Voice : " << this->voice << std::endl;
}
Cat::~Cat() {
	delete[]voice;
}
Parrot::Parrot(const char* name, const char* spec, int year) :Home_pet(name, spec, year) {
	const char* point = "Kesha Horoshiy";
	this->voice = new char[std::strlen(point) + 1];
	for (int i = 0; i < std::strlen(point); i++)
	{
		voice[i] = point[i];
	}
	voice[std::strlen(point)] = '\0';
}
Parrot::~Parrot() {
	delete[]voice;
}
void Parrot::show_Info() {
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Specific : " << this->spec << std::endl;
	std::cout << "Years : " << this->years << std::endl;
	std::cout << "Voice : " << this->voice << std::endl;
}