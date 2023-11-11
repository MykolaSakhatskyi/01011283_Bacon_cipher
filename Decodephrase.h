#pragma once
#include <string>

std::string DecodePhrase(std::string str) {
	std::string baconCiperCode;
	int additionalCounter = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ') {
			if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' ||
				str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' ||
				str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' ||
				str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p' ||
				str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' ||
				str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' ||
				str[i] == 'y' || str[i] == 'z') {
				baconCiperCode = baconCiperCode + "a";
			}
			else if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' ||
				str[i] == 'E' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' ||
				str[i] == 'I' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' ||
				str[i] == 'M' || str[i] == 'N' || str[i] == 'O' || str[i] == 'P' ||
				str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' ||
				str[i] == 'U' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' ||
				str[i] == 'Y' || str[i] == 'Z') {
				baconCiperCode = baconCiperCode + "b";
			}
		}
	}
	return baconCiperCode;
}