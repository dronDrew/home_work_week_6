#pragma once
#include"dependies.h"
class string_inheritance
{
protected:
	char* begin_spring;
	int lenght;
public:
	string_inheritance();//done
	string_inheritance(const char*a);//done
    string_inheritance(const string_inheritance& a);//done
	virtual ~string_inheritance();//done
	int Lenght();//done
	void Clear_string();//done
	string_inheritance& operator =(const string_inheritance& a);//done
	string_inheritance operator +(const string_inheritance & a);//done
	string_inheritance& operator +=(const string_inheritance& a);//done
	bool operator ==(string_inheritance& a);//done
	bool operator !=(string_inheritance& a);//done
};
class bitString :public string_inheritance {
	char* minus;
public:
	bitString();//done
	bitString(const char* a);//done
	bitString(const bitString& a);//done
	~bitString();//done
	void invert();//done
	bitString& operator =(const bitString& a);//done
	bitString operator +(const bitString& a);//done
	bitString& operator +=(const bitString& a);//done
	bool operator ==(bitString& a);//done
	bool operator !=(bitString& a);//done
};
