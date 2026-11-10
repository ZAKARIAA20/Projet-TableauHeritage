#pragma once
#include "Tableau.h"
class Tableauborne :
    public ILSI::Tableau
{
private:
   
    float min;
    float max;
public:
    Tableauborne( float min, float max,int taille);
   const  double operator[](const int& Tb) const;
   void ajoutervaleur(double,int);
    void afficher()const;

    
};

