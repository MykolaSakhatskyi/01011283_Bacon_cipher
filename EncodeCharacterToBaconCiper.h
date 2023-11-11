#pragma once
#include <string>

std::string EncodeCharacterToBaconCiper(char c) {
	std::string encodedCharacter;
	std::string keyChain = "aaaaabbbbbabbbaabbababbaaababaab";
	switch (c)
	{
	case 'a':
		encodedCharacter = keyChain.substr(0, 5);
		break;
	case 'A':
		encodedCharacter = keyChain.substr(0, 5);
		break;
	case 'b':
		encodedCharacter = keyChain.substr(1, 5);
		break;
	case 'B':
		encodedCharacter = keyChain.substr(1, 5);
		break;
	case 'c':
		encodedCharacter = keyChain.substr(2, 5);
		break;
	case 'C':
		encodedCharacter = keyChain.substr(2, 5);
		break;
	case 'd':
		encodedCharacter = keyChain.substr(3, 5);
		break;
	case 'D':
		encodedCharacter = keyChain.substr(3, 5);
		break;
	case 'e':
		encodedCharacter = keyChain.substr(4, 5);
		break;
	case 'E':
		encodedCharacter = keyChain.substr(4, 5);
		break;
	case 'f':
		encodedCharacter = keyChain.substr(5, 5);
		break;
	case 'F':
		encodedCharacter = keyChain.substr(5, 5);
		break;
	case 'g':
		encodedCharacter = keyChain.substr(6, 5);
		break;
	case 'G':
		encodedCharacter = keyChain.substr(6, 5);
		break;
	case 'h':
		encodedCharacter = keyChain.substr(7, 5);
		break;
	case 'H':
		encodedCharacter = keyChain.substr(7, 5);
		break;
	case 'i':
		encodedCharacter = keyChain.substr(8, 5);
		break;
	case 'I':
		encodedCharacter = keyChain.substr(8, 5);
		break;
	case 'j':
		encodedCharacter = keyChain.substr(9, 5);
		break;
	case 'J':
		encodedCharacter = keyChain.substr(9, 5);
		break;
	case 'k':
		encodedCharacter = keyChain.substr(10, 5);
		break;
	case 'K':
		encodedCharacter = keyChain.substr(10, 5);
		break;
	case 'l':
		encodedCharacter = keyChain.substr(11, 5);
		break;
	case 'L':
		encodedCharacter = keyChain.substr(11, 5);
		break;
	case 'm':
		encodedCharacter = keyChain.substr(12, 5);
		break;
	case 'M':
		encodedCharacter = keyChain.substr(12, 5);
		break;
	case 'n':
		encodedCharacter = keyChain.substr(13, 5);
		break;
	case 'N':
		encodedCharacter = keyChain.substr(13, 5);
		break;
	case 'o':
		encodedCharacter = keyChain.substr(14, 5);
		break;
	case 'O':
		encodedCharacter = keyChain.substr(14, 5);
		break;
	case 'p':
		encodedCharacter = keyChain.substr(15, 5);
		break;
	case 'P':
		encodedCharacter = keyChain.substr(15, 5);
		break;
	case 'q':
		encodedCharacter = keyChain.substr(16, 5);
		break;
	case 'Q':
		encodedCharacter = keyChain.substr(16, 5);
		break;
	case 'r':
		encodedCharacter = keyChain.substr(17, 5);
		break;
	case 'R':
		encodedCharacter = keyChain.substr(17, 5);
		break;
	case 's':
		encodedCharacter = keyChain.substr(18, 5);
		break;
	case 'S':
		encodedCharacter = keyChain.substr(18, 5);
		break;
	case 't':
		encodedCharacter = keyChain.substr(19, 5);
		break;
	case 'T':
		encodedCharacter = keyChain.substr(19, 5);
		break;
	case 'u':
		encodedCharacter = keyChain.substr(20, 5);
		break;
	case 'U':
		encodedCharacter = keyChain.substr(20, 5);
		break;
	case 'v':
		encodedCharacter = keyChain.substr(21, 5);
		break;
	case 'V':
		encodedCharacter = keyChain.substr(21, 5);
		break;
	case 'w':
		encodedCharacter = keyChain.substr(22, 5);
		break;
	case 'W':
		encodedCharacter = keyChain.substr(22, 5);
		break;
	case 'x':
		encodedCharacter = keyChain.substr(23, 5);
		break;
	case 'X':
		encodedCharacter = keyChain.substr(23, 5);
		break;
	case 'y':
		encodedCharacter = keyChain.substr(24, 5);
		break;
	case 'Y':
		encodedCharacter = keyChain.substr(24, 5);
		break;
	case 'z':
		encodedCharacter = keyChain.substr(25, 5);
		break;
	case 'Z':
		encodedCharacter = keyChain.substr(25, 5);
		break;
	default:
		break;
	}
	return encodedCharacter;
}