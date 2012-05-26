#ifndef SCHIFFLEIN_H
#define SCHIFFLEIN_H

#include "einzelnesFeld.h"
#include "Schiff.h"
class Schiff;


class Schifflein : public einzelnesFeld
{
    public:
        Schifflein();
        Schifflein(Schiff*);
        virtual ~Schifflein();
        virtual bool istSchiff();
        virtual bool istVersenkt();
        virtual bool wirdgetroffen();
    protected:
    private:
        Schiff* oberSchiff;
};

#endif // SCHIFFLEIN_H
