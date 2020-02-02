#pragma once
#include "dependies.h"
class doc_display
{protected:
	std::string abs;
public:
	virtual void Display(const char* path);
};
class doc_display_ascii_code:public doc_display {
public:
	virtual void Display(const char* path)override;
};
class doc_display_binnary_code :public doc_display {
	void Bit_encrypt(char& a);
public:
	virtual void Display(const char* path)override;
};
