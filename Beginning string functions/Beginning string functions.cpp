// Beginning string functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<algorithm>
#include <iostream>

#include<string> 

bool areTheTwoWordsAnagrams(std::string firstWord, std::string secondWord)
{
	//what does that "const" do? 
	//firstWord = "asdfasdfasd"

	std::sort(firstWord.begin(), firstWord.end());
	std::sort(secondWord.begin(), secondWord.end());

	std::cout << "The two inputs, when sorted, become: \n"; 
	std::cout << firstWord << "\n";
	std::cout << secondWord << "\n";

	//the "long way to do it"
	//if (firstWord == secondWord)
	//{
	//	return true; 
	//}

	//else
	//{
	//	return false; 
	//}

	return (firstWord == secondWord); 
}

void demoSomeWordPlay()
{
	std::string someName = "Cielo";

	std::cout << "What does the LENGTH function do when called on " << someName << " ?"
		<< someName.length() << "\n";


	//std::cout << someName << " at index = 1 is: " << someName.at(1) << "\n"; //prints 'i' (NOT 'C')

	std::string someVerb = "dances";

	std::string someSentence = someName + " " + someVerb; //+ is called the "concatenation operator" 

	//std::cout << someName + " " + someWord << "\n"; //one way to do it

	std::cout << "The sentence is " << someSentence << ".\n"; //another way

}

int main()
{

	//std::string firstWord = "elvis";
	//std::string secondWord = "lives";

	std::string studentName = "Doe Barnes";

	std::string substringOfStudentName = "doe";
	std::string someWord = "ode";


	//demoing substring function: 
	std::string OTHERsubstring = studentName.substr(2, 7);

	std::cout << "\n\nThe OTHER substring of " << studentName << " from index = 0 to 2 (inclusive?): \n";
	std::cout << OTHERsubstring << "\n\n\n";


	


	std::cout << std::boolalpha; //this shows TRUE instead of 1 and FALSE instead of 0 
	std::cout << "Are they anagrams? " << areTheTwoWordsAnagrams(substringOfStudentName, someWord) << "\n";

}
