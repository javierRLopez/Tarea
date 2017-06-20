// sumas variadas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

int a=0, b, num;
int resultado;
bool cont = true;

int main()
{

	while (cont)
	{
		std::cout << "Suma2: ";
		std::cin >> b;
		if (b <0)
		{
			cont = false;
		}
		else
		{
			a = a + b;
		}

	
	}
	std::cout << a << std::endl;
    return 0;
}

