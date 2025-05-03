#include <iostream>
#include <string>

int GetBowlHeight(const std::string& input);

int main() {
	std::string input = "";
	std::cin >> input;

	std::cout << GetBowlHeight(input);

	return 0;
}

int GetBowlHeight(const std::string& input) {
	int sum = 10;

	for (size_t i = 1; i < input.length(); ++i) {
		sum += (input[i] == input[i - 1]) ? 5 : 10;		
	}

	return sum;
}