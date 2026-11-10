#include "Tableauborne.h"
#include <iostream>
using namespace std;
Tableauborne::Tableauborne(float min, float max, int taille) :Tableau(taille)
{
	
	this->min = min;
	this->max = max;
	
}

const double Tableauborne::operator[](const int& Tb)const 
{
	if (Tb >= 0 && Tb < this->taille) {
		return this->Tab[Tb];
	}
	else {
		exit(-1);
	}
}
void Tableauborne::ajoutervaleur(double val,int cas)
{
	if (val > min && val < max && cas>=0 && cas<=taille) {
		Tab[cas] = val;
		
	}
	else {
		cout << "ERREUR" << endl;
	}
}
void Tableauborne::afficher() const
{
	cout << "min :" << this->min <<endl;
	cout << "max :" << this->max << endl;
	
	Tableau::afficher();

	
}
