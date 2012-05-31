#ifndef FRAGE_H
#define FRAGE_H
#include <iostream>
//Kommanmdozeilen Userinterface ;)

class Frage
{
    public:
        static Frage* holeInstanz();
        //Frage();
        virtual ~Frage();
        void textAusgeben(char*);//wo wirds ausgegeben?!?!
        //virtual void textAusgeben(char*, Spieler*)
        void zahlAusgeben(int);
        int intErfragen();
        //void positionErfragen(int*);
    protected://private auch in vererbten aber trotzdem verfügbar
        Frage();//damit genau eine Instanz von Frage existiert: http://www.oop-trainer.de/Themen/Singleton.html
    private:
        static Frage *instanz;
        bool zustand;//true = Alles OK, false = upps Fehler
};

#endif // FRAGE_H
