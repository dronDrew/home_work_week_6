#include "string_inheritance.h"
string_inheritance::string_inheritance() {
	this->begin_spring = nullptr;
	this->lenght = 0;
}
string_inheritance::string_inheritance(const char* a) {
	this->lenght = std::strlen(a);
	this->begin_spring = new char[this->lenght + 1];
	for (int i = 0; i < this->lenght; i++)
	{
		this->begin_spring[i] = a[i];
	}
	this->begin_spring[this->lenght] = '\0';
}
string_inheritance::string_inheritance(string_inheritance& a) {}
string_inheritance::~string_inheritance() {}
int string_inheritance::Lenght() {
	return this->lenght;
}
void string_inheritance::Clear_string() {}
string_inheritance& string_inheritance::operator =(string_inheritance& a) {
	return *this;
}
string_inheritance& string_inheritance::operator +(string_inheritance& a) {
	return *this;
}
string_inheritance& string_inheritance::operator +=(string_inheritance& a) {
	return *this;
}
bool string_inheritance::operator ==(string_inheritance& a) {
	return true;
}
bool string_inheritance::operator !=(string_inheritance& a) {
	return true;
}