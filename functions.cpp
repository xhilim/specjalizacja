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
	cout << "4 - Wyswietl zarezerwowane miejsca" << endl;
	cout << "5 - zobacz statystyki" << endl;
	cout << "6- Zamknij system" << endl;
}


void generuj(int tab[30][6])///generuje siedzenia
{
	int a = 0;	
	for (int i = 0; i < 30; i++)
	{
		tab[i][a] = 0;
		a++;
		if (a == 5) // miejsc w rzedie jest 6, ale tablica siê zaczyna od 0
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
			if (tab[x-1][y-1] == 1)
			{
				cout << "to miejsce jest zajete" << endl;
			}
			else
			{
				tab[x-1][y-1] = 1;
			}

}

void odwolanie(int tab[30][6])//odwolanie rezerwacji 
{
	int x, y;
	cout << "wybierz rzad (od 1 do 30)" << endl;
	cin >> x;
	cout << "wybierz nr miejsca (od 1 do 6)" << endl;
	cin >> y;
	if (tab[x-1][y-1] == 0)
	{
		cout << "to miejsce jest wolne" << endl;
	}
	else
	{
		tab[x-1][y-1] = 0;
	}

}

void sprawdzanie(int tab[30][6])
{
	int x, y;



	cout << "podaj rzad  (od 1 do 30)" << endl;
	cin >> x;
	cout << "podaj miejsce  (od 1 do 6)" << endl;
	cin >> y;
	if (tab[x - 1][y - 1] == 0)
	{
		cout << "to miejsce jest wolne" << endl;
	}
	else
	{
		cout << "to miejsce jest zajete" << endl;
	}
}

void wyswietlanie(int tab[30][6])//wyswiatla miesjca zajete
{

	int j = 0, i = 0;
	while (true)
	{

		if (i > 29)
		{
			break;
		}


		if (tab[i][j] == 1)
		{
			cout << "rzad " << i + 1 << " miejsce " << j + 1 << endl;
		}
		j++;
		if (j > 5)
		{
			j = 0;
			i++;
		}

	}


}

void zajeteiwolne(int tab[30][6])
{
	int wolne = 0, zajete = 0;
	int j = 0, i = 0;
	while (true)
	{
		if (i > 29)
		{
			cout << "wolne miejsca: " << wolne << endl;
			cout << "zajete miejsca: " << zajete << endl;
		}


		if (i > 29)
		{
			break;
		}


		if (tab[i][j] == 1)
		{
		 zajete++;
		}
		else
		{
			wolne++;
		}
		j++;
		if (j > 5)
		{
			j = 0;
			i++;
		}

	}
	

}

void obliczanieceny(int tab[30][6])
{
	int j = 0, i = 0, zysk = 0;

	while (true)
	{
		if (i > 29)
		{
			cout << "z biletów zysk wynosi: " << zysk << endl;
		}


		if (i > 29)
		{
			break;
		}
		if (i <= 5 || i >= 25)
		{
			if (tab[i][j] == 1)
			{
				zysk += 120;
			}
		}
		
		 if (i <= 9 || i >= 20)
		{
			if (tab[i][j] == 1)
			{
				zysk += 110;
			}
		}
		
		 if (i == 12  || i == 3)
		 {
			 if (tab[i][j] == 1)
			 {
				 zysk += 110;
			 }
		 }
		
		if (tab[i][j] == 1)
		{
			zysk += 100;
		
		
		}
		j++;
		if (j > 5)
		{
			j = 0;
			i++;
		}

	}


}