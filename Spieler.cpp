#include "Spieler.h"

Spieler::Spieler()
{
    Spielernummer=-1;
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
    //ctor
}


Spieler::~Spieler()
{
    //dtor
}

bool Spieler::verbindezuSpiel(Spiel* tmpSpiel)
{
    inSpiel=tmpSpiel;
    if(inSpiel!=NULL)
    {
        Spielernummer=inSpiel->verbindeSpieler(this);
        if(Spielernummer>=0)
        {
            //std::cout << "Spieler " << Spielernummer+1 << " verbunden" << std::endl;
            Frage::holeInstanz()->textAusgeben("Spieler ");//beim Spiel ausgeben
            Frage::holeInstanz()->zahlAusgeben(Spielernummer+1);
            Frage::holeInstanz()->textAusgeben(" verbunden\n");
            return true;
        }
        //std::cout << "Spiel ist leider schon voll belegt!" << std::endl;
        Frage::holeInstanz()->textAusgeben("Spiel ist leider schon voll belegt!\n");//beim SpielER ausgeben
        return false;
    }
    //std::cout << "Verbindung konnte nicht hergestellt werden." << std::endl;
    Frage::holeInstanz()->textAusgeben("Verbindung konnte nicht hergestellt werden.\n");//beim SpielER ausgeben
    return false;
}

bool Spieler::sendePosition()//oder doch lieber Schuss und Schiffe setzen getrennt?
{
    //ruft Spiel empfange Position auf
    //char[3] positionEingabe;
    //std::cin >> positionEingabe;
    //inSpiel->empfangePosition(char* positionEingabe, int* positionAusgabe);
    return true;
}
