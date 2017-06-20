// relog.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
int dia, mes, año, hora, minutos, segundos;
long long int v;
int temp;
int m;


void Suma(long int segundosuma)
{
	int i = segundosuma / 60;
	int l = segundosuma % 60;

	
		minutos += i;
		segundos += l;
	
		if (segundos >= 60)
		{
			
			int i = segundos / 60;
			int l = segundos % 60;

			minutos += i;
			segundos = l;
	     }


		int i2 = minutos / 60;
		int l2 = minutos % 60;

		
		
		if (minutos >= 60)
		{

			int i2 = minutos / 60;
			int l2 = minutos % 60;
			

			hora += i2;
			minutos = l2;
		}



		
		int i3 = hora / 24;
		int l3 = hora % 24;

		if (hora >= 24)
		{

			int i3 = hora / 24;
			int l3 = hora % 24;


			dia += i3;
			hora = l3;
		}

		
		//xnvbcnxvxcnbvbcxnbvcxn vc

		

		if (mes == 1 || mes == 3 || mes == 5 ||mes == 7|| mes == 8 || mes == 10 || mes == 12)
		{
			
			m = 31;
			
			
		}
		else if (mes == 2)
		{
			m = 28;
				
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{ 
			m = 30;

		}
		
		int i4 = dia / m;
		int l4 = dia % m;

		if (dia >= m)
		{

			int i4 = dia / m;
			int l4 = dia % m;


			mes += i4;
			dia = l4 + 7;
		}

		

		int i5 = mes / 12;
		int l5 = mes % 12;

		if (mes >= 12)
		{

			int i5 = mes / 12;
			int l5 = mes % 12;


			año += i5;
			mes = l5;
		}


	
}


int main()
{
	//std::cout << "Digite la fecha en el siguiente formato (DD/MM/AA : HH:MM:SS)";
	
	std::cout << "Dia: ";
	std::cin >> dia;
	std::cout << "Mes: ";
	std::cin >> mes;
	std::cout << "Año: ";
	std::cin >> año;
	std::cout << "Hora: ";
	std::cin >> hora;
	std::cout << "Minutos: ";
	std::cin >> minutos;
	std::cout << "Segundos: ";
	std::cin >> segundos;
	
	std::cout << "Suma de segundos: ";
	std::cin >> v;
	Suma(v);


	std::cout << dia << "/" << mes << "/" << año << "     " << hora << ":" << minutos << ":" << segundos << std::endl;

	//std::cout << "";



	
}