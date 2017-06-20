// vectores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <vector>


std::vector<int> v1 = {1,2,5};
std::vector<int> v2 = {7,8,9,52};
std::vector<int> merge2;

int main()
{
	int  i =0, j = 0;

	while (i < v1.size() && j < v2.size())
	{	
			if (v1[i] < v2[j])
			{
				merge2.push_back(v1.at(i));
				++i;
			}
			else
			{
				merge2.push_back(v2.at(j));
				++j;
			}
		}
	if (i == v1.size())
	{
		
		while(j < v2.size())
		{
			merge2.push_back(v2.at(j));
			++j;
		}
	}
	else
	{
		while (i < v1.size())
		{
			merge2.push_back(v1.at(i));
			++i;
		}
	}

	for (int o = 0; o < merge2.size();++o)
	{
		std::cout << merge2.at(o);
	}
	
		
	
	std::cout << std::endl;
	
    return 0;
}

