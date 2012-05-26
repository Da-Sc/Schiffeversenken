#include "Schiff.h"

Schiff::Schiff(int tmplaenge)
{
    //ctor
    Schifflaenge=tmplaenge;
    *ausSchiffleinBestehend=new Schifflein[Schifflaenge];
    for(int i=0; i<Schifflaenge; i++)
    {
        ausSchiffleinBestehend[i]=new Schifflein(this);
    }
}

Schiff::~Schiff()
{
    //dtor
    for(int i=0; i<Schifflaenge; i++)
    {
        delete ausSchiffleinBestehend[i];
    }
}

bool Schiff::istVersenkt()
{
    return !(Schifflaenge-nochSchwimmend);
}

void Schiff::getroffen()
{
    nochSchwimmend--;
}
