#include "FOrigin.h"
#include <string>

void FConsciousness::Create()
{
	ConsName = "Dolores";
	ConsQuestion = "Have you ever questioned the nature of your reality?";
	ConsAnswer = "No";
}

void FConsciousness::SetName(std::string Name)
{
	ConsName = Name;
}

std::string FConsciousness::GetName()
{
	return std::string(ConsName);
}

void FConsciousness::GiveQuestion()
{

}

std::string FConsciousness::GetAnswer()
{
	return std::string();
}
