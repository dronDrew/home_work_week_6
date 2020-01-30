#pragma once
#include"dependies.h"
class string_inheritance
{
	char* begin_spring;
	int lenght;
public:
	string_inheritance();//done
	string_inheritance(const char*a);//done
	string_inheritance(string_inheritance& a);
	~string_inheritance();//done
	int Lenght();//done
	void Clear_string();
	string_inheritance& operator =(string_inheritance& a);
	string_inheritance& operator +(string_inheritance & a);
	string_inheritance& operator +=(string_inheritance& a);
	bool operator ==(string_inheritance& a);
	bool operator !=(string_inheritance& a);
};

