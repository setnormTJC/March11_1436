// More string function play - Mar 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"dictionaryWordAnalyticsLibrary.h"

#include <iostream>

int main()
{
	std::cout << "The function returned: " << MySpace::determineMostCommonWordLength();


	std::string someRandomWord = "zero"; 

	std::cout << "\n\nback of " << someRandomWord << " is: " << someRandomWord.back() << "\n";


	std::cout << "FRONT of " << someRandomWord << " is: " << someRandomWord.front() << "\n";

	char letterToSearchFor = '*'; 
	if (someRandomWord.find(letterToSearchFor) != std::string::npos)
	{
		std::cout << "When searching for: " << letterToSearchFor << " , the find function returns: "
			<< someRandomWord.find(letterToSearchFor) << "\n";
	}

	else
	{
		std::cout << "NOT found\n";
	}
}
