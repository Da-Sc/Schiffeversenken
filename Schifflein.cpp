#include "Schifflein.h"

Schifflein::Schifflein()
{
    //ctor
    getroffen=false;
}

Schifflein::Schifflein(Schiff* zugehoerigesSchiff)
{
    //ctor
    getroffen=false;
    oberSchiff=zugehoerigesSchiff;
}

Schifflein::~Schifflein()
{
    //dtor
}

bool Schifflein::istSchiff()
{
    return true;
}
bool Schifflein::istVersenkt()
{
    return oberSchiff->istVersenkt();
}

bool Schifflein::wirdgetroffen()
{
    if(getroffen) return false;
    getroffen=true;
    oberSchiff->getroffen();
    return true;
}
