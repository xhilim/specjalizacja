#include <iostream>
#include "Functions.h"
using namespace std;


int main()
{					
	int siedzenia[30][6];
	int cena = 0; ///cena bez podwyzek to 100
	
	menu();
	generuj(siedzenia);
	
	
	char znak; // tu zapiszemy wci�ni�ty klawisz
	znak = getchar(); // program pobiera znak

	while (znak != '6') //je�li nie wybrali�my 7, czyli nie chcemy ko�czy� to:
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
	} // tutaj p�tla zawraca i jeszcze raz sprawdza warunek
	


}                   
