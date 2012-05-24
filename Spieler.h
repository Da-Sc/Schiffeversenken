#ifndef SPIELER_H
#define SPIELER_H
#include "Spiel.h"

class Spieler
{
    public:
        Spieler();
        virtual ~Spieler();
        virtual bool verbindezuSpiel(Spiel*);
        //virtual bool sendePosition(char*);
    protected:
    private:
        int Spielernummer;
        int Felder[2][10][10];
        Spiel* inSpiel;
};

#endif // SPIELER_H
