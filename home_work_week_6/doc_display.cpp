#include "doc_display.h"
void doc_display::Display(const char* path) {
	std::ifstream file;
	file.open(path);
	if (file.is_open()) {
		while (!file.eof())
		{
			std::getline(file,abs);
			std::cout << abs;
		}
	}
	else
	{
		std::cout << "Can`t find file\n";
	}
}
void doc_display_ascii_code::Display(const char* path) {
	std::ifstream file;
	file.open(path);
	if (file.is_open()) {
		while (!file.eof())
		{
			std::getline(file, abs);
			for (int i = 0; i < abs.length(); i++)
			{
				std::cout << int(abs[i]);
			}
		}
	}
	else
	{
		std::cout << "Can`t find file\n";
	}

}
void doc_display_binnary_code::Bit_encrypt(char &a) {
	for (int i = 7; i >=0 ; i--)
	{
		std::cout<<(((a >> i)&0x01) ?1 : 0);
	}

}
void doc_display_binnary_code::Display(const char* path) {
	std::ifstream file;
	file.open(path);
	if (file.is_open()) {
		while (!file.eof())
		{
			std::getline(file, abs);
			for (int i = 0; i < abs.length(); i++)
			{
				this->Bit_encrypt(abs[i]);
			}
		}
	}
	else
	{
		std::cout << "Can`t find file\n";
	}
}
