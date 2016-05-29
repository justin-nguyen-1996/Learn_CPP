#include <iostream>

int main() {
	char letter {97};
	std::cout << letter << std::endl;
	std::cout << static_cast<int> (letter) << std::endl;
	std::cout << letter << std::endl;
}
