#include "Linear.h"
void Liner_Equation::calculate_equation(double a, double b, double c) {
	this->res = b / a;
	this->res *= -1;
	std::cout << this->res<<std::endl;
}
Liner_Equation::Liner_Equation() {
	this->res = 0;
}
Squer_Equation::Squer_Equation() {
	this->res = this->res_2 = 0;
}
void Squer_Equation::calculate_equation(double a, double b, double c) {
	double operar = 0;
	operar = (b * b) - 4 * a * c;
	if (operar > 0)
	{
		this->res = ((-b) + sqrt(operar)) / (2 * a);
		this->res_2 = ((-b) - sqrt(operar)) / (2 * a);
		std::cout << this->res << std::endl;
		std::cout << this->res_2 << std::endl;
	}
	else if (operar == 0)
	{
		this->res = ((-b) + sqrt(operar)) / (2 * a);
		std::cout << this->res << std::endl;
	}
	else if (operar < 0)
	{
		std::cout << -1 << std::endl;
	}
}