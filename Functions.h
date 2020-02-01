#ifndef H_FUNCTIONS
#define H_FUNCTIONS

void menu();//menu

void generuj(int tab[30][6]); // tworzy puste miejsca na tablicach (wartoœæ pustego miejsca wynosi 0)

void rezerwuj(int tab[30][6]); //rezerwuje miejsca porzez nadanie im wartoœci 1 jak i nie pozwala na zajêcie dwa razy tego samego miejsca 


void odwolanie(int tab[30][6]);//odwo³anie rezerwacji przez nadanie im wartosci 0 i nie pozwala odwolacwolnego miejsca


void sprawdzanie(int tab[30][6]);//sprawdza czy miejsce jest zajete tylko, ¿e tym razem tylko pokazuje czy jest wolne czy nie

void wyswietlanie(int tab[30][6]); // sprawdza czy miejsce jest zajete i pokazuje je

void zajeteiwolne(int tab[30][6]);// pokazuje liczbe miejsc wolnych i zajetych

void obliczanieceny(int tab[30][6]);//oblicza zysk



#endif//H_FUNCTIONS