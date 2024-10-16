// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <unordered_set>
#include <list>
#include <cstdlib>

using namespace std;

unsigned char die() // unsigned char : [0, 255]
{
	return (1 + rand() % 6); // 1D6
}

int main()
{
	srand(time(NULL));
	list<unsigned char> rolls;
	for (size_t iteration = 0; iteration < 12; iteration++)
	{
		rolls.push_back(die());
		for (auto& i : rolls)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}
