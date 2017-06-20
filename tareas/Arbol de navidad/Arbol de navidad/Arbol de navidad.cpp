// Arbol de navidad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream" 

int main()
{
	int tam;
	int u = -1;

	std::cout << "Que tamaño quiere que sea el arbol de navidad: ";
	std::cin >> tam;
	std::cout << std::endl;
	for (int i = 0; i < tam ; ++i )
	{
		for (int  y = tam; y >= i; --y)
		{
			std::cout << " ";
		}
		for (int o = i; o > u; o -= 1)
		{
			std::cout << "*";

		}
		u -= 1;
		std:: cout << std::endl;
	}

	std::cout << std::endl;


    return 0;
}

