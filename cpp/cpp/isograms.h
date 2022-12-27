#pragma once
#include <string>

class Isograms {
private:
	char lower(char c);
public:
	bool is_isogram(std::string str);
};