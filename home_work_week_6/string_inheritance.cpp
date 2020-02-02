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
string_inheritance::string_inheritance(const string_inheritance& a) {
	this->lenght = a.lenght;
	this->begin_spring = new char[this->lenght + 1];
	for (int i = 0; i < this->lenght; i++)
	{
		this->begin_spring[i] = a.begin_spring[i];
	}
	this->begin_spring[this->lenght] = '\0';
}
string_inheritance::~string_inheritance() {
	if (this->begin_spring != nullptr) {
		delete[]this->begin_spring;
	}
}
int string_inheritance::Lenght() {
	return this->lenght;
}
void string_inheritance::Clear_string() {
	delete[]this->begin_spring;
	this->begin_spring = new char[this->lenght + 1];
	this->begin_spring[0] = '\0';
}
string_inheritance& string_inheritance::operator =(const string_inheritance& a) {
	this->lenght = a.lenght;
	if (this->begin_spring != nullptr) {
		delete[]this->begin_spring;
		this->begin_spring = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->begin_spring[i] = a.begin_spring[i];
		}
		this->begin_spring[this->lenght] = '\0';
		return *this;
	}
	else
	{
		this->begin_spring = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->begin_spring[i] = a.begin_spring[i];
		}
		this->begin_spring[this->lenght] = '\0';
		return *this;
	}
	
}
string_inheritance string_inheritance::operator +(const string_inheritance& a) {
	string_inheritance temp=*this;
	temp += a;
	return temp;
}
string_inheritance& string_inheritance::operator +=(const string_inheritance& a) {
	string_inheritance temp = *this;
	this->lenght = temp.lenght + a.lenght;
	this->Clear_string();
	int k{ 0 };
	for (int i = 0; i < temp.lenght; i++)
	{
		this->begin_spring[k] = temp.begin_spring[i];
		k++;
	}
	for (int j = 0; j < temp.lenght; j++)
	{
		this->begin_spring[k] = a.begin_spring[j];
		k++;
	}
	this->begin_spring[k]= '\0';
	return *this;
}
bool string_inheritance::operator ==(string_inheritance& a) {
	if (a.lenght != this->lenght) {
		return false;
	}
	else
	{
		for (int i = 0; i < a.lenght; i++)
		{
			if (this->begin_spring[i] != a.begin_spring[i]) {
				return false;
			}
		}
		return true;
	}
	
}
bool string_inheritance::operator !=(string_inheritance& a) {
	return !(*this == a);
}
bitString::bitString(const char *a):bitString() {
	if (a[0] == 48) {
		string_inheritance::lenght = std::strlen(a);
		int iter = std::strlen(a) / 8;
		string_inheritance::lenght += iter;
		if (std::strlen(a) <= 8) {
			string_inheritance::begin_spring = new char[string_inheritance::lenght + 1];
		}
		else
		{

			string_inheritance::begin_spring = new char[string_inheritance::lenght + 1];
		}
		try
		{
			for (int i = 0, j = 0; i < string_inheritance::lenght; i++)
			{
				if (a[i] != 48 && a[i] != 49) {
					throw 1;
				}
				if ((!(i % 8) && (i > 0))) {
					string_inheritance::begin_spring[j] = '.';
					j++;
				}
				else
				{
					string_inheritance::begin_spring[j] = a[i];
					j++;
				}
			}
		}

		catch (int) {
			string_inheritance::lenght = 0;
			delete[]string_inheritance::begin_spring;
			string_inheritance::begin_spring = new char[string_inheritance::lenght + 2];
			string_inheritance::begin_spring[0] = '0';
			string_inheritance::begin_spring[1] = '\0';
		}
		this->begin_spring[string_inheritance::lenght] = '\0';
	}
	else
	{
		string_inheritance::lenght = std::strlen(a);
		int iter = std::strlen(a) / 8;
		string_inheritance::lenght += iter;
		if (std::strlen(a) <= 8) {
			this->minus = new char[string_inheritance::lenght + 1];
		}
		else
		{

			this->minus = new char[string_inheritance::lenght + 1];
		}
		try
		{
			for (int i = 0, j = 0; i < string_inheritance::lenght; i++)
			{
				if (a[i] != 48 && a[i] != 49&&a[i]!='\0') {
					throw 1;
				}
				if (((!(i % 8)) && (i > 0))) {
					this->minus[j] = '.';
					j++;
				}
				else
				{
					this->minus[j] = a[i];
					j++;
				}
				
			}
		}

		catch (int) {
			string_inheritance::lenght = 0;
			delete[]this->minus;
			this->minus = new char[string_inheritance::lenght + 2];
			this->minus[0] = '0';
			this->minus[1] = '\0';
		}
		this->minus[ string_inheritance::lenght] = '\0';
	}
}
bitString::bitString() :string_inheritance() {
	this->minus = nullptr;
}
bitString::bitString(const bitString& a) {
	if (this->minus == nullptr) {
		this->lenght = a.lenght;
		this->begin_spring = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->begin_spring[i] = a.begin_spring[i];
		}
		this->begin_spring[this->lenght] = '\0';
	}
	else if(this->begin_spring==nullptr){
		this->lenght = a.lenght;
		this->minus = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->minus[i] = a.minus[i];
		}
	}
}
bitString::~bitString() {
	if (this->minus != nullptr) {
		delete[]this->minus;
	}
}
void bitString::invert() {
	if (this->minus == nullptr) 
	{
		this->minus = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			if (this->begin_spring[i] == '0') {
				this->minus[i] = '1';
			}
			else if(this->begin_spring[i] == '1')
			{
				this->minus[i] = '0';
			}
			else
			{
				this->minus[i] = this->begin_spring[i];
			}
		}
		this->minus[this->lenght] = '\0';
		delete[]this->begin_spring;
		this->begin_spring = nullptr;
	}
	else
	{
		this->begin_spring = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			if (this->minus[i] == '0') {
				this->begin_spring[i] = '1';
			}
			else if(this->minus[i] == '1')
			{
				this->begin_spring[i] = '0';
			}
			else
			{
				this->begin_spring[i] = this->minus[i];
			}
		}
		this->begin_spring[this->lenght] = '\0';
		delete[] this->minus;
		this->minus = nullptr;
	}
}
bitString& bitString::operator=(const bitString &a) {
	if (a.minus == nullptr) {
		if (this->minus != nullptr) {
			delete[]this->minus;
			this->minus = nullptr;
		}
		delete[]this->begin_spring;
		this->lenght = a.lenght;
		this->begin_spring = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->begin_spring[i] = a.begin_spring[i];
		}
		this->begin_spring[this->lenght] = '\0';
	}
	else
	{
		if (this->begin_spring != nullptr) {
			delete[]this->begin_spring;
			this->begin_spring = nullptr;
		}
		delete[]this->minus;
		this->lenght = a.lenght;
		this->minus = new char[this->lenght + 1];
		for (int i = 0; i < this->lenght; i++)
		{
			this->minus[i] = a.minus[i];
		}
		this->minus[this->lenght] = '\0';

	}
	return *this;
}
bool  bitString::operator ==(bitString& a) {
	if (this->lenght != a.lenght) {
		return false;
	}
	if (this->begin_spring == nullptr && a.begin_spring != nullptr) {
		return false;
	}
	else if (this->minus == nullptr && a.minus != nullptr) {
		return false;
	}
	if (this->begin_spring != nullptr) {
		for (int i = 0; i < this->lenght; i++)
		{
			if (this->begin_spring[i] != a.begin_spring[i]) {
				return false;
			}
		}
		return true;
	}
	else
	{
		for (int i = 0; i < this->lenght; i++)
		{
			if (this->minus[i] != a.minus[i]) {
				return false;
			}
		}
		return true;
	}
}
bool  bitString::operator !=(bitString& a) {
	return !(*this == a);
}
bitString bitString::operator +(const bitString& a) {
	bitString temp;
	int max{ 0 };
	int min{ 0 };
	if (this->begin_spring!=nullptr&&a.minus!=nullptr)
	{
		if (this->lenght > a.lenght) {
			temp.lenght = this->lenght;
			max = this->lenght;
			min = a.lenght;
		}
		else
		{
			temp.lenght = a.lenght;
			max = a.lenght;
			min = this->lenght;
		}
		temp.minus = new char[temp.lenght + 1];
		for (int i = 0; i < max; i++)
		{
			if (i < min)
			{
				if (this->begin_spring[i] == '1' && a.minus[i] == '1') {
					temp.minus[i] = '1';
				}
				else if (this->begin_spring[i] == '0' && a.minus[i] == '1') {
					temp.minus[i] = '1';
				}
				else if (this->begin_spring[i] == '1' && a.minus[i] == '0') {
					temp.minus[i] = '1';
				}
				else if (this->begin_spring[i] == '0' && a.minus[i] == '0') {
					temp.minus[i] = '0';
				}
			}
			else
			{
				if (a.minus[i] == '1' || a.minus[i] == '0') {
					temp.minus[i] = a.minus[i];
				}
				else
				{
					
					temp.minus[i] = this->begin_spring[i];
				}
			}
		}
		temp.minus[max-1] = '\0';
	}
	else if (this->minus != nullptr && a.begin_spring != nullptr) {
		if (this->lenght > a.lenght) {
			temp.lenght = this->lenght;
			max = this->lenght;
			min = a.lenght;
		}
		else
		{
			temp.lenght = a.lenght;
			max = a.lenght;
			min = this->lenght;
		}
		temp.minus = new char[temp.lenght + 1];
		for (int i = 0; i < max; i++)
		{
			if (i < min)
			{
				if (this->minus[i] == '1' && a.begin_spring[i] == '1') {
					temp.minus[i] = '1';
				}
				else if (this->minus[i] == '0' && a.begin_spring[i] == '1') {
					temp.minus[i] = '1';
				}
				else if (this->minus[i] == '1' && a.begin_spring[i] == '0') {
					temp.minus[i] = '1';
				}
				else if (this->minus[i] == '0' && a.begin_spring[i] == '0') {
					temp.minus[i] = '0';
				}
			}
			else
			{
				if (a.begin_spring[i] == '1' || a.begin_spring[i] == '0') {
					temp.minus[i] = a.begin_spring[i];
				}
				else
				{

					temp.minus[i] = this->minus[i];
				}
			}
		}
		temp.minus[max - 1] = '\0';
	}
	else
	{
		if (this->lenght > a.lenght) {
			temp.lenght = this->lenght;
			max = this->lenght;
			min = a.lenght;
		}
		else
		{
			temp.lenght = a.lenght;
			max = a.lenght;
			min = this->lenght;
		}
		if (this->begin_spring!=nullptr&&a.begin_spring!=nullptr)
		{
			temp.begin_spring = new char[temp.lenght + 1];
			for (int i = 0; i < max; i++)
			{
				if (i < min)
				{
					if (this->begin_spring[i] == '1' && a.begin_spring[i] == '1') {
						temp.begin_spring[i] = '1';
					}
					else if (this->begin_spring[i] == '0' && a.begin_spring[i] == '1') {
						temp.begin_spring[i] = '1';
					}
					else if (this->begin_spring[i] == '1' && a.begin_spring[i] == '0') {
						temp.begin_spring[i] = '1';
					}
					else if (this->begin_spring[i] == '0' && a.begin_spring[i] == '0') {
						temp.begin_spring[i] = '0';
					}
				}
				else
				{
					if (a.begin_spring[i] == '1' || a.begin_spring[i] == '0') {
						temp.begin_spring[i] = a.begin_spring[i];
					}
					else
					{

						temp.minus[i] = this->begin_spring[i];
					}
				}
			}
			temp.begin_spring[max-1] = '\0';
		}
		else {
			temp.minus = new char[temp.lenght + 1];
			for (int i = 0; i < max; i++)
			{
				if (i < min)
				{
					if (this->minus[i] == '1' && a.minus[i] == '1') {
						temp.minus[i] = '1';
					}
					else if (this->minus[i] == '0' && a.minus[i] == '1') {
						temp.minus[i] = '1';
					}
					else if (this->minus[i] == '1' && a.minus[i] == '0') {
						temp.minus[i] = '1';
					}
					else if (this->minus[i] == '0' && a.minus[i] == '0') {
						temp.minus[i] = '0';
					}
				}
				else
				{
					if (a.minus[i] == '1' || a.minus[i] == '0') {
						temp.minus[i] = a.minus[i];
					}
					else
					{

						temp.minus[i] = this->minus[i];
					}
				}
			}
			temp.minus[max-1] = '\0';
		}
	}
	return temp;
}
bitString& bitString::operator +=(const bitString& a) {
	*this = *this + a;
	return *this;
}