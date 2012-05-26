#include "einzelnesFeld.h"

einzelnesFeld::einzelnesFeld()
{
    //ctor
    getroffen=false;
}

einzelnesFeld::~einzelnesFeld()
{
    //dtor
}

bool einzelnesFeld::wirdgetroffen()
{
    if(getroffen) return false;
    getroffen=true;
    return true;
}
bool einzelnesFeld::istSchiff()
{
    return false;
}
