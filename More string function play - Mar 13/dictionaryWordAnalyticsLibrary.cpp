#include"dictionaryWordAnalyticsLibrary.h"

#include<fstream> //filestream 
#include <iostream>
#include<string> //for getline function 

int MySpace::determineMostCommonWordLength()
{
	std::ifstream fin("C:/Users/Work/Downloads/popular.txt");

	if (!fin)
	{
		std::cout << "File was not found :(\n";
		return -1; 
	}

	std::string currentWordInDictionary; 

	int numberOf4LetterWords = 0; 
	int numberOf5LetterWords = 0; 
	int numberOf6LetterWords = 0;


	while (std::getline(fin, currentWordInDictionary))
	{
		int numberOfLettersInCurrentWord = currentWordInDictionary.length(); 

		switch (numberOfLettersInCurrentWord)
		{
		case 4: 
			numberOf4LetterWords++; 
			break; //KitKat bar!

		case 5: 
			numberOf5LetterWords++; 
			break; 

		case 6: 
			numberOf6LetterWords++; 
			break; 

		default: 
			//std::cout << "Unsupported word length\n";
			break; 
		}
		//if (currentWordInDictionary.length() == 5)
		//{
		//	numberOf5LetterWords++; 
		//	std::cout << currentWordInDictionary << "\n";
		//}
	}

	std::cout << "\n\nThe TOTAL number of 4 letter words is: "
		<< numberOf4LetterWords << "\n";

	std::cout << "\n\nThe TOTAL number of 5 letter words is: "
		<< numberOf5LetterWords << "\n";

	std::cout << "\n\nThe TOTAL number of 6 letter words is: "
		<< numberOf6LetterWords << "\n";

	//what else does this need?????


}
