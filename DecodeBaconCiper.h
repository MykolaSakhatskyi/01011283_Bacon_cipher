#pragma once
#include <string>

std::string Ñompare(std::string str) {
	std::string decodedChar;
	std::string keyChain = "aaaaabbbbbabbbaabbababbaaababaab";
	if (str == keyChain.substr(0, 5))
		decodedChar = "a";
	else if (str == keyChain.substr(1, 5))
		decodedChar = "b";
	else if (str == keyChain.substr(2, 5))
		decodedChar = "c";
	else if (str == keyChain.substr(3, 5))
		decodedChar = "d";
	else if (str == keyChain.substr(4, 5))
		decodedChar = "e";
	else if (str == keyChain.substr(5, 5))
		decodedChar = "f";
	else if (str == keyChain.substr(6, 5))
		decodedChar = "g";
	else if (str == keyChain.substr(7, 5))
		decodedChar = "h";
	else if (str == keyChain.substr(8, 5))
		decodedChar = "i";
	else if (str == keyChain.substr(9, 5))
		decodedChar = "j";
	else if (str == keyChain.substr(10, 5))
		decodedChar = "k";
	else if (str == keyChain.substr(11, 5))
		decodedChar = "l";
	else if (str == keyChain.substr(12, 5))
		decodedChar = "m";
	else if (str == keyChain.substr(13, 5))
		decodedChar = "n";
	else if (str == keyChain.substr(14, 5))
		decodedChar = "o";
	else if (str == keyChain.substr(15, 5))
		decodedChar = "p";
	else if (str == keyChain.substr(16, 5))
		decodedChar = "q";
	else if (str == keyChain.substr(17, 5))
		decodedChar = "r";
	else if (str == keyChain.substr(18, 5))
		decodedChar = "s";
	else if (str == keyChain.substr(19, 5))
		decodedChar = "t";
	else if (str == keyChain.substr(20, 5))
		decodedChar = "u";
	else if (str == keyChain.substr(21, 5))
		decodedChar = "v";
	else if (str == keyChain.substr(22, 5))
		decodedChar = "w";
	else if (str == keyChain.substr(23, 5))
		decodedChar = "x";
	else if (str == keyChain.substr(24, 5))
		decodedChar = "y";
	else if (str == keyChain.substr(25, 5))
		decodedChar = "z";

		return decodedChar;
}

std::string DecodeBaconCiper(std::string str) {
	std::string ourWord;
	for (int i = 0; i < str.size(); i += 5)
	{
		char someStr[] = { str[i], str[i + 1], str[i + 2], str[i + 3], str[i + 4],'\0'};
		ourWord = ourWord + Ñompare(someStr);
	}
	
	return ourWord;
}