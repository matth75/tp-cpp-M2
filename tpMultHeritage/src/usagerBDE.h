#pragma once

#include "personne.hpp"
#include "membreBDE.h"

class UsagerBDE : public Personne, public MembreBDE {
public:
	UsagerBDE() : Personne(), MembreBDE() {};
	UsagerBDE(Personne& p) : Personne(p), MembreBDE() {};
	UsagerBDE(string nom, string prenom, float premierVersement) : Personne(nom, prenom), MembreBDE(premierVersement) {};
	UsagerBDE(UsagerBDE& jlNeau) : Personne(jlNeau), MembreBDE(jlNeau) {};
	string toString() override;
	float max() override { return 0; };
	void affichage() {std::cout << this->toString() << std::endl; };
};