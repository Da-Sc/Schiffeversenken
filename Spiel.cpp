#include "Spiel.h"
#include <iostream>


Spiel::Spiel(void)
{
	AnzahlSchiffe=0;
	std::cout << "Neues Spiel gestartet" << std::endl;
	
	do{
		std::cout << "Bitte die Anzahl an Schiffen (1-5) eingeben: ";
		std::cin >> AnzahlSchiffe;
		if(AnzahlSchiffe<1 || AnzahlSchiffe>5) std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
	}while(AnzahlSchiffe<1 || AnzahlSchiffe>5);

	std::cout << std::endl;

	Schifflaenge = new int[AnzahlSchiffe];
	std::cout << "Und nun bitte die Länge (2-5 Felder) der einzelnen Schiffe: " << std::endl;
	for(int i=0; i<AnzahlSchiffe; i++)
	{
		std::cout << "Schiff " << (i+1) << ": " << std::endl;
		int Laengetmp=0;
		std::cin >> Laengetmp;
		if(Laengetmp<2 || Laengetmp>5)
		{
			std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
			i--;
		}
		else Schifflaenge[i]=Laengetmp;

	}
}


Spiel::~Spiel(void)
{
}
