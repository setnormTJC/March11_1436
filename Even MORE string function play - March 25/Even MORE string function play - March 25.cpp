// Even MORE string function play - March 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>
#include <iostream>
#include<string> 

void demoClearEmptyReverse()
{
	std::string someWord = "Lindol";

	//someWord.clear(); 

	std::cout << "What did it do? \n";
	std::cout << someWord << "\n";

	if (someWord.empty())
	{
		std::cout << "There are no characters in the string\n";
	}

	else
	{
		std::cout << "There ARE characters in the string\n";
	}

	std::reverse(someWord.begin(), someWord.end());

	std::cout << "After REVERSING, string is: " << someWord << "\n";
}

void printStuff(int a)
{
	std::cout << a << "\n";
}

void printStuff(int a, int b)
{
	std::cout << a << "\t" << b << "\n";
}

void demoOverloadingAndTheFindFunction()
{
	//printStuff(1);
//printStuff(562, 11); //calls the other version of the function

	std::string someWord = "alpha";

	int indexOfFIRSTOccurrenceOfA = someWord.find('a');

	std::cout << "index (indices?) of letter 'a': " << indexOfFIRSTOccurrenceOfA << "\n";

	//how do we find the location (AKA: index) of the SECOND occurrence of 'a' in "alpha"? 
	int positionOfSecondA = someWord.find('a', indexOfFIRSTOccurrenceOfA + 1);

	std::cout << "Is it 4? " << positionOfSecondA << "\n";
	//demoClearEmptyReverse(); 

	//do we know what it means for a function to be "overloaded"?

}
int main()
{
	std::string otherWord = "beta";

	//otherWord.erase(1, 2);
	otherWord.erase('e');  //goes out of bounds! ('e' gets interpreted as 101 -> the decimal value of 'e')

	//...and there is no 101th position in "beta"

	std::cout << "What did it do? " << otherWord << "\n";


}
