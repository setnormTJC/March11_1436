#include"myStringLibrary.h"

void MySpace::myReplace(std::string& originalWord, const char characterToReplace, 
	const char characterToReplaceItWith)
{
	for (int i = 0; i < originalWord.length(); ++i)
	{
		if (originalWord.at(i) == characterToReplace)
		{
			originalWord[i] = characterToReplaceItWith;
		}
	}
}
