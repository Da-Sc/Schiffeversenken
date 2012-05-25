#include "Spiel.h"
#include <iostream>


Spiel::Spiel(void)
{
	AnzahlSchiffe=0;
	AnzahlSpieler=0;

	for(int i=0; i<2; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                Felder[i][j][k]=0;
            }
        }
    }

	std::cout << "Neues Spiel gestartet" << std::endl;

	do{
		std::cout << "Bitte die Anzahl an Schiffen (1-5) eingeben: ";
		std::cin >> AnzahlSchiffe;
		if(std::cin.bad() || std::cin.fail() || AnzahlSchiffe<1 || AnzahlSchiffe>5)
        {
            std::cin.clear();//setzt cin Zustand zurück
            std::cin.ignore(100, '\n'); //verwirft alle im cin Puffer gespeicherten Eingaben (bis zum 100. element (wahrscheinlich net gut^^)) inklusive des Zeilenumbruchs
            AnzahlSchiffe=0; std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
        }
	}while(!AnzahlSchiffe);

	std::cout << std::endl;

	Schifflaenge = new int[AnzahlSchiffe];
	std::cout << "Und nun bitte die Länge (2-5 Felder) der einzelnen Schiffe: " << std::endl;
	for(int i=0; i<AnzahlSchiffe; i++)
	{
		std::cout << "Schiff " << (i+1) << ": " << std::endl;
		int Laengetmp=0;
		std::cin >> Laengetmp;
		if(std::cin.bad() || std::cin.fail() || Laengetmp<2 || Laengetmp>5)
		{
		    std::cin.clear();
            std::cin.ignore(100, '\n');
			std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
			i--;
		}
		else Schifflaenge[i]=Laengetmp;

	}
}


Spiel::~Spiel(void)
{
}

int Spiel::verbindeSpieler(Spieler* verbindenderSpieler)
{
    if(AnzahlSpieler>1) return (-1);
    AnzahlSpieler++;
    verbundeneSpieler[AnzahlSpieler-1]=verbindenderSpieler;
    return AnzahlSpieler-1;
}

void Spiel::setzeSchiffe(int Spielernummer)
{
    std::cout << "Spieler " << Spielernummer+1 << ", bitte Schiffe setzten:" << std::endl;
    for(int i=0; i<AnzahlSchiffe; i++)
    {
        std::cout << "Setzen von Schiff Nr. " << i+1 << " mit " << Schifflaenge[i] << " Feldern Länge" << std::endl;
        if(!setzeSchiff(i)) i--;
    }
}

bool Spiel::setzeSchiff(int Schiffnummer)
{
    return true;
}

bool Spiel::empfangePosition(char* positionEingabe, int* positionAusgabe)
{
    char ersteStelle=positionEingabe[0];
    char* zweiteStelle;
    zweiteStelle=new char[2];
    zweiteStelle[0]=positionEingabe[1];
    zweiteStelle[1]=positionEingabe[2];
    return true;
}
