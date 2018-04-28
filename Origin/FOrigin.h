#pragma once
#include <string>		

class FConsciousness {

public:
	void Create();
	void SetName(std::string);
	std::string GetName();
	void GiveQuestion();
	std::string GetAnswer();




private:
	std::string ConsName = "";
	std::string	ConsQuestion = "";
	std::string ConsAnswer = "";
};