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

void Frage::textAusgeben(char* text)
{
    std::cout << text << std::flush;
}

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
            //if(!zustand) std::cout << std::endl;
			textAusgeben("Falsche Eingabe, bitte Wiederholen: ");
			std::cin >> tmp;
			zustand=false;
	}
	zustand=true;
	std::cout << std::endl;

    return tmp;
}
