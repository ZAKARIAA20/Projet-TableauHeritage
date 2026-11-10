#include "Tableau.h"
#include<iostream>
using namespace std;
using namespace ILSI;
// def du constructeur

Tableau::Tableau(int n) {
	taille = n;
	Tab = new double[n];

	for (int i = 0;i < taille;i++) {
		Tab[i] = 0;
	}

}

void Tableau::afficher() const {

	for (int i = 0;i < taille;i++) {
		cout << "Tab[" << i << "] = " << Tab[i] << endl;
	}
}

Tableau ILSI::Tableau::operator=(const Tableau& T)
{
	if (this == &T) return *this;
	else
	{
		
			delete Tab;
			Tab = nullptr;
			this->taille = T.taille;
			this->Tab = new double[taille];
			for (int i = 0;i < taille;i++) {
				if (T.Tab[i] != 0) {
					this->Tab = new double(T.Tab[i]);

				}
				else {
					this->Tab[i] = 0;
				}
			}
			return *this;
	}
}

 double& ILSI::Tableau::operator[](const int& T)
{
	if (T >= 0 && T < this->taille) {
		return this->Tab[T];
	}
	else {
		exit(-1);
	}


}

Tableau::~Tableau() {
	delete[]Tab;
}