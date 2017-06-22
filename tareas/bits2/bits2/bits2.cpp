// bits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "vector"
int a, b, r, t;
std::vector<int> guardar;
int n = 0;
int modulos[];
void bin()
{
	
	while (a != 0)
	{

		r = a / b;
		t = a % b;
		a = r;

		
		guardar.push_back(t);
		std::cout << guardar.at(t);

	}

	
		
	

		

}


int main()
{

	std::cout << "que numero quieres: ";
	std::cin >> a;

	std::cout << "base a convertir: ";
	std::cin >> b;

	bin();
	return 0;
}



//definir dos variables, una que te de el numero que s en decimal y otra el sistema
//dividirlo entre el numero que es el sistema con modulo, y guardas el numero en una variante nueva
//guardar los modulos 
//ese numero sustituye a la variable a


