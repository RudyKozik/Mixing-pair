#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));
	string riadok;
	ifstream infile;
	string dvojica[5][2][12];
	int poradie[5];
	int random;
	int skupina = 0;
	int clen = 0;
	int pismeno = 0;

	infile.open("d:\\Projects\\file.txt");

	//Nacitanie zo zlozky do 3D pola
	while (infile.eof() == false)
	{
		getline(infile, riadok);

		if (riadok == "")
		{
			skupina++;
			clen = 0;
			continue;
		}

		for (int i = 0; i < riadok.length(); i++)
		{
			dvojica[skupina][clen][pismeno] = riadok[i];
			pismeno++;
		}

		pismeno = 0;
		clen++;

	}

	//Generovanie poradia
	for (int i = 0; i < 5; i++)
	{
		poradie[i] = -1;
	}

	for (int i = 0; i < 5; i++)
	{
		do
		{
			random = rand() %5;
		} while (poradie[random] != -1);

		poradie[random] = i;
	}

	//Vypis na obrazovke
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 12; k++)
			{
				cout << dvojica[poradie[i]][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

	cin.get();
}