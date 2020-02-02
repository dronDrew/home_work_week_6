#pragma once
#include"dependies.h"
class Equation
{
public:
	virtual void calculate_equation(double a, double b, double c) = 0;
	
};
class Liner_Equation :public Equation {
	double res;
public:
	Liner_Equation();
	void calculate_equation(double a, double b, double c=0.0)override;
};
class Squer_Equation :public Equation {
	double res,res_2;
public:
	Squer_Equation();
	void calculate_equation(double a, double b, double c)override;
};




