#pragma once
class Spiel
{
public:
	Spiel(void);
	virtual ~Spiel(void);
	virtual int verbindeSpieler();//überprüft ob nicht schon Zuviele Spieler verbunden sind und gibt Spielernummer (0,1) zurück
	virtual bool setzeSchiff(int);
	//virtual bool empfangePosition(char*);

private:
	int AnzahlSchiffe;
	int* Schifflaenge;
	int Felder[2][10][10];
	int AnzahlSpieler;
};

