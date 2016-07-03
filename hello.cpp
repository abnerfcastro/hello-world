#include <iostream>

int main()
{
	std::string name;
	int age;

	std::cout << "Hello World!" << std::endl;
	
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;

	std::cout << "Hi, " << name << ". Nice to meet you." << std::endl;

	return 0;
}
