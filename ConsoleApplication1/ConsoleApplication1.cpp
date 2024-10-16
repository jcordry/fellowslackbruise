// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <iostream>
#include <string>

#include <list>
#include <map>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int die() // unsigned char : [0, 255]
{
	return (1 + rand() % 6); // 1D6
}

int main()
{
	srand(time(NULL));
	map<string,int> rolls;
	for (size_t iteration = 0; iteration < 12; iteration++)
	{
		rolls[to_string(iteration)] = die();
		for (auto& i : rolls)
		{
			cout << i.first << ":" << i.second << " ";
		}
		cout << endl;
	}
}
