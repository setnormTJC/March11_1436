#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	string guessedWord;

	cout << "Player 1: Enter a word to be guessed: " << endl;
	cin >> word;

	// adding * to all positions of guessWord up to length of word
	for (int i = 0; i < word.length(); i++)
	{
		guessedWord.append("*");
	}

	string guessedL;
	while (guessedWord != word)
	{
		cout << "\nPlayer 2: Guess a letter: " << endl;
		cin >> guessedL;

		if (word.find(guessedL) != -1)
		{
			// for loop for find and replace with letter
			for (int i = word.length() - 1; i >= 0; i--)
			{
				if (word[i] == guessedL[0])
				{
					guessedWord[i] = guessedL[0];
				}
			}
			cout << "You guessed a correct letter!" << endl;

		}
		else
		{
			cout << "Sorry, that letter is not in the word." << endl;
		}
		cout << "\nMystery Word update: " << guessedWord << endl;
	}
	cout << "\n Yay! Mystery Word Solved!" << endl;


	return 0;
}