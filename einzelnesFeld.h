#ifndef EINZELNESFELD_H
#define EINZELNESFELD_H


class einzelnesFeld
{
    public:
        einzelnesFeld();
        virtual ~einzelnesFeld();
        virtual bool wirdgetroffen();//Schuss auf das einzelnen Feld ruft das auf-> überprüft ob schon mal darauf geschossen wurde
        virtual bool istSchiff();
        virtual bool istVersenkt()=0;

    protected:
        bool getroffen; //getroffen oder nicht?
    private:

};

#endif // EINZELNESFELD_H
