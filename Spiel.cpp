#include "Spiel.h"

//char arrays übergeben ohne bekannte länge wahrscheinlich schlecht idee -> später noch ändern

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

    Frage::holeInstanz()->textAusgeben("Neues Spiel gestartet\n");//beim Spiel ausgeben
	do{
		Frage::holeInstanz()->textAusgeben("Bitte die Anzahl an Schiffen (1-5) eingeben: ");//beim Spiel ausgeben
		AnzahlSchiffe=Frage::holeInstanz()->intErfragen();
		if(AnzahlSchiffe<1 || AnzahlSchiffe>5) Frage::holeInstanz()->textAusgeben("Ungültige Schiffanzahl!\n\n");//beim Spiel ausgeben
	}while(AnzahlSchiffe<1 || AnzahlSchiffe>5);

	Schifflaenge = new int[AnzahlSchiffe];
	Frage::holeInstanz()->textAusgeben("Und nun bitte die Länge (2-5 Felder) der einzelnen Schiffe:\n");//beim Spiel ausgeben
	for(int i=0; i<AnzahlSchiffe; i++)
	{
		Frage::holeInstanz()->textAusgeben("Schiff ");//beim Spiel ausgeben
		Frage::holeInstanz()->zahlAusgeben(i+1);
		Frage::holeInstanz()->textAusgeben(": ");
		int Laengetmp=0;
		Laengetmp=Frage::holeInstanz()->intErfragen();
		if(Laengetmp<2 || Laengetmp>5)
		{
			Frage::holeInstanz()->textAusgeben("Schiff hat eine falsche Länge!\n");//beim Spiel ausgeben
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

//TODO: ab hier komplett überarbeiten!

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
//unnötig?
bool Spiel::empfangePosition(char* positionEingabe, int* positionAusgabe)
{
    char ersteStelle=positionEingabe[0];
    char* zweiteStelle;
    zweiteStelle=new char[2];
    zweiteStelle[0]=positionEingabe[1];
    zweiteStelle[1]=positionEingabe[2];
    return true;
}
