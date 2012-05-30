#include "Spiel.h"

//char arrays �bergeben ohne bekannte l�nge wahrscheinlich schlecht idee -> sp�ter noch �ndern

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

	//std::cout << "Neues Spiel gestartet" << std::endl;
    UI.textAusgeben("Neues Spiel gestartet\n");
	do{
		//std::cout << "Bitte die Anzahl an Schiffen (1-5) eingeben: ";
		UI.textAusgeben("Bitte die Anzahl an Schiffen (1-5) eingeben: ");
		//std::cin >> AnzahlSchiffe;
		AnzahlSchiffe=UI.intErfragen();
		if(AnzahlSchiffe<1 || AnzahlSchiffe>5) UI.textAusgeben("Ung�ltige Schiffanzahl!\n\n");
		/*if(std::cin.bad() || std::cin.fail() || AnzahlSchiffe<1 || AnzahlSchiffe>5)
        {
            std::cin.clear();//setzt cin Zustand zur�ck
            std::cin.ignore(100, '\n'); //verwirft alle im cin Puffer gespeicherten Eingaben (bis zum 100. element (wahrscheinlich net gut^^)) inklusive des Zeilenumbruchs
            AnzahlSchiffe=0;
            //std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
            UI.textAusgeben("Falsche Eingabe, bitte Wiederholen!\n");
        }*/
	}while(AnzahlSchiffe<1 || AnzahlSchiffe>5);

	//std::cout << std::endl;

	Schifflaenge = new int[AnzahlSchiffe];
	//std::cout << "Und nun bitte die L�nge (2-5 Felder) der einzelnen Schiffe: " << std::endl;
	UI.textAusgeben("Und nun bitte die L�nge (2-5 Felder) der einzelnen Schiffe:\n");
	for(int i=0; i<AnzahlSchiffe; i++)
	{
		//std::cout << "Schiff " << (i+1) << ": " << std::endl;
		UI.textAusgeben("Schiff ");
		UI.zahlAusgeben(i+1);
		UI.textAusgeben(": ");
		int Laengetmp=0;
		//std::cin >> Laengetmp;
		Laengetmp=UI.intErfragen();
		if(/*std::cin.bad() || std::cin.fail() || */Laengetmp<2 || Laengetmp>5)
		{
		    //std::cin.clear();
            //std::cin.ignore(100, '\n');
			//std::cout << "Falsche Eingabe, bitte Wiederholen!" << std::endl;
			//UI.textAusgeben("Falsche Eingabe, bitte Wiederholen!\n");
			UI.textAusgeben("Schiff hat eine falsche L�nge!\n");
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

//TODO: ab hier komplett �berarbeiten!

void Spiel::setzeSchiffe(int Spielernummer)
{
    std::cout << "Spieler " << Spielernummer+1 << ", bitte Schiffe setzten:" << std::endl;
    for(int i=0; i<AnzahlSchiffe; i++)
    {
        std::cout << "Setzen von Schiff Nr. " << i+1 << " mit " << Schifflaenge[i] << " Feldern L�nge" << std::endl;
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
