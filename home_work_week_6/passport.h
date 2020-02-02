#pragma once
#include "dependies.h"
class date {
	int day;
	int mounth;
	int year;
public:
	date(int day, int mounth, int year);//done
	date();//done
	std::string Get_date();//done
	void Set_date(int day, int mounth, int year);//done
};
class Passport
{
	std::string name;
	std::string surname;
	std::string By_father;
	date date_of_birth;
	date date_of_recive;
	std::string Place_of_living;
public:
	Passport(std::string name, std::string surname, std::string By_father, int day_born, int mounth_born, int year_born, int day_rec, int mounth_rec, int year_re, std::string place);//done
	std::string Get_name();//done
	std::string Get_surname();//done
	std::string Get_By_father();//done
	std::string Get_date_of_birth();//done
	std::string Get_date_of_receive();//done
	std::string Get_Adress_of_living();//done
	void Show_info_Passport();//done
};
class Foreign_passport :public virtual Passport {
	std::string Seria_passport;
	std::string Visa_info;
public:
	Foreign_passport(std::string name, std::string surname, std::string By_father, int day_born, int mounth_born, int year_born, int day_rec, int mounth_rec, int year_re, std::string place, std::string Seria);//done
	std::string Get_Seria_passport();//done
	void Set_info_visa(std::string visa_info);//done
	std::string Get_info_visa();//done
	void Show_info_Passport();//done
};

