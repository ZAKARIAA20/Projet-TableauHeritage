#pragma once
namespace	ILSI {
	class Tableau
	{
		//attributs 
	protected:
		double* Tab;
		int taille;

		//methodes
	public:
		// constructeur avec params
		Tableau(int =0);
		void afficher() const;
		// destructeur 
		Tableau operator=(const Tableau& T);
		 double& operator[](const int& T);
		~Tableau();
	};
}


