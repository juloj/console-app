// app.cpp : Defines the entry point for the console application.
//

#include <iostream>

int main(int argc, char * argv[])
{
	std::cout << "Hello zadanie!" << std::endl;

	for (int i = 0; i < argc; ++i)
	{
		std::cout << argv[i] << std::endl;
	}

	return 0;
}
