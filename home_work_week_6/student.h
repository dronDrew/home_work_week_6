#pragma once
#pragma once
#include"dependies.h"
class student
{
	std::string name;
	std::string surname;
	std::string group;
public:
	student(std::string name, std::string surname, std::string group);
	void Set_name(std::string name);
	void Set_surname(std::string surname);
	void Set_group(std::string group);
	std::string Get_name();
	std::string Get_surname();
	std::string Get_group();
};

class Aspirant :public virtual student {
	bool defence_succsec;
	std::string Them_of_work;
public:
	Aspirant(std::string name, std::string surname, std::string group);
	void Set_Theam_of_work(std::string Them_of_work);
	void Set_status_defence(bool a);
	std::string Get_theam_of_work();
	bool Get_status_of_defence();

};

