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

    UI.textAusgeben("Neues Spiel gestartet\n");
	do{
		UI.textAusgeben("Bitte die Anzahl an Schiffen (1-5) eingeben: ");
		AnzahlSchiffe=UI.intErfragen();
		if(AnzahlSchiffe<1 || AnzahlSchiffe>5) UI.textAusgeben("Ungültige Schiffanzahl!\n\n");
	}while(AnzahlSchiffe<1 || AnzahlSchiffe>5);

	Schifflaenge = new int[AnzahlSchiffe];
	UI.textAusgeben("Und nun bitte die Länge (2-5 Felder) der einzelnen Schiffe:\n");
	for(int i=0; i<AnzahlSchiffe; i++)
	{
		UI.textAusgeben("Schiff ");
		UI.zahlAusgeben(i+1);
		UI.textAusgeben(": ");
		int Laengetmp=0;
		Laengetmp=UI.intErfragen();
		if(Laengetmp<2 || Laengetmp>5)
		{
			UI.textAusgeben("Schiff hat eine falsche Länge!\n");
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
