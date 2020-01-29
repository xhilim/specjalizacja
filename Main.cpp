#include <iostream>
#include "Functions.h"
#include <fstream> // narazie nie wiem po co
#include <string> // to te¿
using namespace std;
fstream kontrola; // tego tez			

int main()
{					
	int siedzenia[30][6];
	int cena = 100;
	
	menu();
	generuj(siedzenia);
	
	
	char znak; // tu zapiszemy wciœniêty klawisz
	znak = getchar(); // program pobiera znak

	while (znak != '7') //jeœli nie wybraliœmy 7, czyli nie chcemy koñczyæ to:
	{
		switch (znak) 
		{
		case '1':
			cout << "Dodaj rezerwacje" << endl;
			rezerwuj(siedzenia);
			break;
		case '2':
			cout << "Anuluj rezerwacje" << endl;
			break;
		case '3':
			cout << "Sprawdz miejsce" << endl;
			break;
		case '4':
			cout << "Wyswietl wszystkie miejsca" << endl;
			break;
		case '5':
			cout << "Wyswietl wolne miejsca" << endl;
			break;
		case '6':
			cout << "Wyswietl zarezerwowane miejsca" << endl;
			break;
		}

		znak = getchar();// jeszcze raz dokonujemy wyboru
	} // tutaj pêtla zawraca i jeszcze raz sprawdza warunek
	


}                   
