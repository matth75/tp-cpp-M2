/*
 * Enseignant.h
 *
 *  Created on: 19 sept. 2017
 *      Author: rodet
 */

#include "personne.hpp"
#include "etudiant.hpp"
#include<sstream>


const int NTYPE = 3;


enum TEns {Cours=0, TD, TP};

class Enseignant: public Personne {
private:
	float service[NBUE][NTYPE];
public:
	Enseignant();
	Enseignant(Personne &p);
	Enseignant(std::string nom, std::string prenom);
	void addCours(TEns ens,UE eu,float nbHeure);
	std::string toString() override;
	void afficher() override;
	float serviceEqTD();
	virtual ~Enseignant();
	float max() override;
};
