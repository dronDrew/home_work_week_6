#include "passport.h"
date::date() {
	this->day = 0;
	this->mounth = 0;
	this->year = 0;
}
date::date(int day, int mounth, int year) {
	this->day = day;
	this->mounth = mounth;
	this->year = year;
}
std::string date::Get_date() {
	return (std::to_string(this->day) + "." + std::to_string(this->mounth) + "." + std::to_string(this->year));
}
void date::Set_date(int day, int mounth, int year) {
	this->day = day;
	this->mounth = mounth;
	this->year = year;
}
Passport::Passport(std::string name, std::string surname, std::string By_father, int day_born, int mounth_born, int year_born, int day_rec, int mounth_rec, int year_re, std::string place) {
	this->name = name;
	this->surname = surname;
	this->By_father = By_father;
	this->date_of_birth.Set_date(day_born, mounth_born, year_born);
	this->date_of_recive.Set_date(day_rec, mounth_rec, year_re);
	this->Place_of_living = place;
}
std::string Passport::Get_name() {
	return this->name;
}
std::string Passport::Get_surname() {
	return this->surname;
}
std::string Passport::Get_By_father() {
	return this->By_father;
}
std::string Passport::Get_date_of_birth() {
	return this->date_of_birth.Get_date();
}
std::string Passport::Get_date_of_receive() {
	return this->date_of_recive.Get_date();
}
std::string Passport::Get_Adress_of_living() {
	return this->Place_of_living;
}
void  Passport::Show_info_Passport() {
	std::cout << "Name : " << this->Get_name() << std::endl;
	std::cout << "Surname : " << this->Get_surname() << std::endl;
	std::cout << "By Father : " << this->Get_By_father() << std::endl;
	std::cout << "Date of Birth : " << this->Get_date_of_birth() << std::endl;
	std::cout << "Date of receive : " << this->Get_date_of_receive() << std::endl;
	std::cout << "Adress of living : " << this->Get_Adress_of_living() << std::endl;


}
Foreign_passport::Foreign_passport(std::string name, std::string surname, std::string By_father, int day_born, int mounth_born, int year_born, int day_rec, int mounth_rec, int year_re, std::string place, std::string Seria) :Passport(name, surname, By_father, day_born, mounth_born, year_born, day_rec, mounth_rec, year_re, place) {
	this->Seria_passport = Seria;
	this->Visa_info;
}
std::string	Foreign_passport::Get_Seria_passport() {
	return this->Seria_passport;
}
void Foreign_passport::Set_info_visa(std::string visa_info) {
	this->Visa_info = visa_info;
}
std::string Foreign_passport::Get_info_visa() {
	return this->Visa_info;
}
void Foreign_passport::Show_info_Passport() {
	std::cout << "Passport Seria : " << this->Get_Seria_passport() << std::endl;
	std::cout << "Name : " << this->Get_name() << std::endl;
	std::cout << "Surname : " << this->Get_surname() << std::endl;
	std::cout << "Date of Birth : " << this->Get_date_of_birth() << std::endl;
	std::cout << "Date of receive : " << this->Get_date_of_receive() << std::endl;
	std::cout << "Adress of living : " << this->Get_Adress_of_living() << std::endl;
	std::string visa_inf = Get_info_visa();
	if (visa_inf == "\0") {
		std::cout << "No visa information\n";
	}
	else
	{
		std::cout << "visa information : " << visa_inf << std::endl;
	}


}