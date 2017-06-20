// multiplicacion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int r = 0,q, w,cont;

void mult(const int & a, const int &b)
{
	if (a >= 0 && b >= 0)
	{
		cont = 0;
		if (b != 0)
		{
			cont = 1;

			if (a < b)
			{
				while (cont <= a)
				{
					r += b;
					cont++;
					std::cout << r << std::endl;
				}
			}
			else if(b < a)
			{
				while (cont <= b)
				{
					r += a;
					cont++;
					std::cout << r << std::endl;
				}
			}
			else if (a == b)
			{
				while (cont <= b)
				{
					r += a;
					cont++;
					std::cout << r << std::endl;
				}
			}
			
		}
		
	}

	if (a < 0 && b < 0)
	{
		cont = 0;
		if (b < 0)
		{
			cont = -1;
			if (a > b)
			{
				while (cont >= a)
				{
					r -= b;
					cont--;
					std::cout << r << std::endl;
				}
			}
			else if (b > a)
			{
				while (cont >= b)
				{
					r -= a;
					cont--;
					std::cout << r << std::endl;
				}
			}
		
		}

	}
	else if (a < 0 || b < 0)
	{
		cont = 0;
		if (b < 0)
		{
			cont = 1;
			while (cont <= a)
				{
					r -= b;
					cont++;
					std::cout << -r << std::endl;
				}

		}else if (a < 0)
		{
			cont = 1;
			while (cont <= b)
			{
				r -= a;
				cont++;
				std::cout << -r << std::endl;
			}
			
		}
	}
		
	
	
	
		if (a == 0)
		{
			r = 0;
		}


}


int main()
{
	int p, o;
	std::cout << "Multiplicion a: ";
	std::cin >> p;
	std::cout << "Multiplicion b: ";
	std::cin >> o;
	mult(p, o);

	std::cout << std::endl;
    return 0;
}

