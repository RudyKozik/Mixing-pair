#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

char loading()
{
	const int x = 2;
	const int y = 7;
	const int z = 5;

	ifstream file("d:\\Projects\\file.txt");

	char myArray[x][y][z];

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
				file >> myArray[i][j];
		}
	}

	return myArray[x][y][z];
}

void writing(char myArray[2][7][5])
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			cout << myArray[i][j];
		}
	}
}

int random()
{
	int random;
	srand(time(NULL));
	random = rand() % 7 - 1;
	return random;
}

void main()
{
	cin.get();
}