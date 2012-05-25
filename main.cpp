#include "Spiel.h"
#include <iostream>
#include "Spieler.h"

int main()
{
	Spiel *Testspiel = new Spiel();
	Spieler *Testspieler1 = new Spieler();
	Spieler *Testspieler2 = new Spieler();
	Spieler *Testspieler3 = new Spieler();

	Testspieler1->verbindezuSpiel(Testspiel);
	Testspieler2->verbindezuSpiel(Testspiel);
	Testspieler3->verbindezuSpiel(Testspiel);

	//system("Pause");
	return 0;
}
