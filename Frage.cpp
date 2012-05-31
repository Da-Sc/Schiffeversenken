#include "Frage.h"

Frage::Frage()
{
    //ctor
    zustand=true;
}

Frage::~Frage()
{
    //dtor
}

Frage *Frage::instanz=NULL;

Frage* Frage::holeInstanz()
{
    if(instanz == NULL)//überprüft ob einer Instanz schon angelegt wurde
      instanz=new Frage();

    return instanz;
}

void Frage::textAusgeben(char* text)
{
    std::cout << text << std::flush;
}

/*void Frage::textAusgeben(char* text, Spieler* externerSpieler)
{
    std::cout << text << std::flush;
}*/

void Frage::zahlAusgeben(int zahl)
{
    std::cout << zahl << std::flush;
}

int Frage::intErfragen()
{
    int tmp=0;
    std::cin >> tmp;

    while(std::cin.bad() || std::cin.fail())
    {
		    std::cin.clear();
            std::cin.ignore(100, '\n');
            tmp=0;
			textAusgeben("Falsche Eingabe, bitte Wiederholen: ");
			std::cin >> tmp;
			zustand=false;
	}
	zustand=true;
	std::cout << std::endl;

    return tmp;
}
