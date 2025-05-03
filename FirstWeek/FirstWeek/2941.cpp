#include <iostream>
#include <string>

int main() {
	int const alphabetLength = 8;

	std::string croatianAlphabet[alphabetLength] = {
		"dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z=" // "dz=" ¸ÕÀú
	};
	std::string input = "";
	std::cin >> input;
	int count = 0;

	for (int i = 0; i < alphabetLength; i++) {
		size_t pos = 0;
		if (input.find(croatianAlphabet[i]) != std::string::npos) {						
			pos = input.find(croatianAlphabet[i]);
			input.replace(pos, croatianAlphabet[i].length(), "#");
			++count;			
			i -= 1;
		}
	}	

	for (char ch : input)
		if (ch != '#') count++;

	std::cout << count;

	return 0;
}
