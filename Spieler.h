#ifndef SPIELER_H
#define SPIELER_H
#include "Spiel.h"
#include "Frage.h"
#include <iostream>

class Spiel;

class Spieler
{
    public:
        Spieler();
        virtual ~Spieler();
        virtual bool verbindezuSpiel(Spiel*);
        virtual bool sendePosition();
        //Frage UI;//iwie global ?!?->Singleton
    protected:
    private:
        int Spielernummer;
        int Felder[2][10][10];
        Spiel* inSpiel;
};

#endif // SPIELER_H
