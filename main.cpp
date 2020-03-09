// ConsoleApplication1.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

	int tab[1000000];

int main()
{

	ifstream dane;
	dane.open("dane.txt");
	ofstream out;
	out.open("wyjscie.txt");
	int x;
	while (dane>>x)
	{
		tab[x]++;
	}
	for (int i = 1000000; i >= 0; i--)
	{
		while (tab[i]--)
		{
			out << i << endl;
		}
	}
	out.close();

}

