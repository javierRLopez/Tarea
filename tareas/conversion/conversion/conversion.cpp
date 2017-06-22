// conversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

int main()
{
	int a = 100;
	char impreso;

	std::string lol;

	while (a != 0)
	{
		
		impreso = 48 +(a % 10);
		a /= 10;
		std::cout << impreso;
	}
	
	

    return 0;
}

