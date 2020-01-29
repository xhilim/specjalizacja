#include "Functions.h"
#include <iostream>
#include <fstream>

using namespace std;

void menu() //menu
{
	cout << "System rezerwacji miejsc - Singlekino.pl" << endl << endl; 
	cout << "Wybierz opcje:" << endl << endl;

	cout << "1 - Dodaj rezerwacje" << endl;
	cout << "2 - Usun rezerwacje" << endl;
	cout << "3 - Sprawdz miejsce" << endl;
	cout << "4 - Wyswietl wszystkie rezerwacje" << endl;
	cout << "5 - Wyswietl wolne miejsca" << endl;
	cout << "6 - Wyswietl zarezerwowane miejsca" << endl;
	cout << "7 - Zamknij system" << endl;
}


void generuj(int tab[30][6])///generuje siedzenia
{
	int a = 0;	
	for (int i = 0; i < 30; i++)
	{
		tab[i][a] = 0;
		a++;
		if (a == 6) // miejsc w rzedie jest 6
		{
			a = 0;
		}
	}
}


void rezerwuj(int tab[30][6])//rezerwacja i sprawdzanie czy jest zajete
{
	int x, y;
	cout << "wybierz rzad (od 1 do 30)" << endl;
		cin >> x;
		cout << "wybierz nr miejsca (od 1 do 6)" << endl;
			cin >> y;
			if (tab[x][y] == 1)
			{
				cout << "to miejsce jest zajete" << endl;
			}
			else
			{
				tab[x][y] = 1;
			}

}

void odwolanie(int tab[30][6])//odwolanie rezerwacji 
{
	int x, y;
	cout << "wybierz rzad (od 1 do 30)" << endl;
	cin >> x;
	cout << "wybierz nr miejsca (od 1 do 6)" << endl;
	cin >> y;
	if (tab[x][y] == 0)
	{
		cout << "to miejsce jest wolne" << endl;
	}
	else
	{
		tab[x][y] = 0;
	}

}