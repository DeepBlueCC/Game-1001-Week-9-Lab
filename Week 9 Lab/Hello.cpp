// This program demonstrates that a string is in fact a CHAR array

#include <iostream>

int main()
{
	char hello[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	std::cout << hello;

	return 0;
}