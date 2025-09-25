#pragma once

#include "etudiant.hpp"
#include "membreBDE.h"

class EtudiantBDE : public Etudiant, public MembreBDE {
public:
	EtudiantBDE() : Etudiant(), MembreBDE() {};
	EtudiantBDE(string nom, string prenom) : Etudiant(nom, prenom), MembreBDE() {};
	EtudiantBDE(string nom, string prenom, float premierVersement) : Etudiant(nom, prenom), MembreBDE(premierVersement) {};
	EtudiantBDE(EtudiantBDE& paul) : Etudiant(paul), MembreBDE(paul) {};
	string toString() {return this->Etudiant::toString() + " / " +  this->MembreBDE::toString(); };
	void affichage() { std::cout << this->toString() << std::endl; };

};