#ifndef FRAGE_H
#define FRAGE_H
#include <iostream>
//Kommanmdozeilen Userinterface ;)

class Frage
{
    public:
        Frage();
        virtual ~Frage();
        void textAusgeben(char*);
        void zahlAusgeben(int);
        int intErfragen();
        //void positionErfragen(int*);
    protected:
    private:
        bool zustand;//true = Alles OK, false = upps Fehler
};

#endif // FRAGE_H
