#ifndef SCHIFF_H
#define SCHIFF_H

#include "Schifflein.h"
class Schifflein;

class Schiff
{
    public:
        Schiff(int);
        virtual ~Schiff();
        bool istVersenkt();
        void getroffen();
    protected:
    private:
        int Schifflaenge;
        int nochSchwimmend;
        Schifflein* *ausSchiffleinBestehend;
};

#endif // SCHIFF_H
