#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	const int x = 2;
	const int y = 7;
	const int z = 5;

	char myArray[x][y][z];

	ifstream file("d:\\Projects\\file.txt");

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				file >> myArray[i][j][k];
			}
		}
	}

	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			for (int k = 0; k < z; ++k)
			{
				cout << myArray[i][j][k];
			}
		}
	}

	cin.get();
}