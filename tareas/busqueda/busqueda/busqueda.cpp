// busqueda.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

int main()
{
	int num[] = {1,2,3,4,5};
	int inf, sup, mitad, dato;
	char band = 'F';

	dato = 4;

	inf = 0;
	sup = 5;
	while (inf <= sup)
	{
		mitad = (inf + sup) / 2;

		if (num[mitad] == dato)
		{
			band = 'V';
			break;
		}
		if (num[mitad] > dato)
		{
			sup = mitad;
			mitad = (inf + sup) / 2;
		}
		if (num[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup) / 2;
		}
	}

	if (band == 'V')
	{
		std::cout << "El numero ha sido encontrado: " << mitad << std::endl;
	}
	else
	{
		std::cout << "El numero no ha ido encontrado" << std::endl;
	}


    return 0;
}

