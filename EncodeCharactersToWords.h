#pragma once
#include <string>

std::string EncodeCharactersToWords(std::string str) {
	std::string encodedWord = "joy welcome to my garden you can find here many cherris trees";
	int additionalCounter = 0;
	for (int i = 0; i < encodedWord.size(); i++)
	{
		if (encodedWord[i] != ' ') {
			if (str[additionalCounter] == 'b') {
				encodedWord[i] = encodedWord[i] - 'a' + 'A';
				additionalCounter++;
			}
			else
				additionalCounter++;
		}
		else {
			encodedWord[i] = encodedWord[i];
		}

	}
	return encodedWord;
}
