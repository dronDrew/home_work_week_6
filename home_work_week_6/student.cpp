#include "student.h"
void student::Set_name(std::string name) {
	this->name = name;
}
void student::Set_surname(std::string surname) {
	this->surname = surname;
}
void student::Set_group(std::string group) {
	this->group = group;
}
student::student(std::string name, std::string surname, std::string group) {
	this->Set_name(name);
	this->Set_surname(surname);
	this->Set_group(group);
}
std::string student::Get_name() {
	return this->name;
}
std::string student::Get_surname() {
	return this->surname;
}
std::string student::Get_group() {
	return this->group;
}
Aspirant::Aspirant(std::string name, std::string surname, std::string group) :student(name, surname, group) {
	this->defence_succsec = false;
	this->Them_of_work;
}
void Aspirant::Set_Theam_of_work(std::string theam) {
	this->Them_of_work = theam;
}
void Aspirant::Set_status_defence(bool a) {
	this->defence_succsec = a;
}
std::string Aspirant::Get_theam_of_work() {
	return this->Them_of_work;
}
bool Aspirant::Get_status_of_defence() {
	return this->defence_succsec;
}