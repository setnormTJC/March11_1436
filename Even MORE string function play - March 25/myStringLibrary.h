#pragma once //this means only include this header file ONCE!

#include<string> 

namespace MySpace
{
	/*
	* @returns nuthin'! -> because we are passing the string by ref. and MODIFIYING it!
	*/
	void myReplace(std::string& originalWord, const char characterToReplace,
		const char characterToReplaceItWith);  //the semicolon means this 
												//is a function "declaration" 
}

