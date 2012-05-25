#ifndef SPIEL_H
#define SPIEL_H
#include "Spieler.h"

class Spieler;//da Klassen sich gegenseitig benötigen

class Spiel
{
public:
	Spiel(void);
	virtual ~Spiel(void);
	virtual int verbindeSpieler(Spieler*);//überprüft ob nicht schon Zuviele Spieler verbunden sind und gibt Spielernummer (0,1) zurück
	virtual void setzeSchiffe(int);
	virtual bool setzeSchiff(int);
	virtual bool empfangePosition(char*,int*);

private:
	int AnzahlSchiffe;
	int* Schifflaenge;
	int Felder[2][10][10];
	int AnzahlSpieler;
	Spieler* verbundeneSpieler[2];
};

#endif // SPIEL_H

