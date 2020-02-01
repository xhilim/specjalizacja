#include <iostream>
#include "Functions.h"
using namespace std;


int main()
{					
	int siedzenia[30][6];
	int cena = 0; ///cena bez podwyzek to 100
	
	menu();
	generuj(siedzenia);
	
	
	char znak; // tu zapiszemy wciœniêty klawisz
	znak = getchar(); // program pobiera znak

	while (znak != '6') //jeœli nie wybraliœmy 7, czyli nie chcemy koñczyæ to:
	{
		switch (znak) //menu tylko ze juz po znaku
		{
		case '1':
			cout << "Dodaj rezerwacje" << endl;
			rezerwuj(siedzenia);
			break;
		case '2':
			cout << "Anuluj rezerwacje" << endl;
			odwolanie(siedzenia);
			break;
		case '3':
			cout << "Sprawdz miejsce" << endl;
			sprawdzanie(siedzenia);
			break;
			case '4':
			cout << "Wyswietl zarezerwowane miejsca" << endl;
			wyswietlanie(siedzenia);
			break;
		case '5':
			cout << "zobacz statystyki" << endl;
			zajeteiwolne(siedzenia);
			obliczanieceny(siedzenia);
			break;
		}

		znak = getchar();// jeszcze raz dokonujemy wyboru
	} // tutaj pêtla zawraca i jeszcze raz sprawdza warunek
	


}                   
