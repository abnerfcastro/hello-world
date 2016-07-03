#include <iostream>

int main()
{
	std::string name;
	std::cout << "Hello World!" << std::endl;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;

	std::cout << "Hi, " << name << ". Nice to meet you." << std::endl;

	return 0;
}
