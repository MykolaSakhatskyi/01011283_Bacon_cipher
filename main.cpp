#include <iostream>
#include "EncodeCharacterToBaconCiper.h"
#include "EncodeCharactersToWords.h"
#include "Decodephrase.h"
#include "DecodeBaconCiper.h"



int main() {
	std::string word = "Prometheus";
	std::string encodedWord;
	std::cout <<"Word to encode: "<< word << std::endl;
	std::cout << "Word after applying Bacon Cipher: ";
	for (int i = 0; i < word.size(); i++)
	{
		std::cout << EncodeCharacterToBaconCiper(word[i]) << " ";
		encodedWord = encodedWord + EncodeCharacterToBaconCiper(word[i]);
	}
	std::cout << std::endl;
	std::string somePhrase = EncodeCharactersToWords(encodedWord);
	std::cout << "Word after encoding to some phrase: "<< somePhrase << std::endl;
	std::string phraseToBaconCiper = DecodePhrase(somePhrase);
	std::cout << "Word after decoding from some phrase: " << phraseToBaconCiper << std::endl;
	std::string wordAllOperations = DecodeBaconCiper(phraseToBaconCiper);
	std::cout << "Word after decoding from Bacon Ciper: " << wordAllOperations << std::endl;
	
	return 0;
}