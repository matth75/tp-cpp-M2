#include "membreBDE.h"

using namespace std;

MembreBDE::MembreBDE() {
	this->listAsso = nullptr;
	this->nbAsso = 0;
	this->solde = 0.0; // grand prince
	this->histoConso = 0;
}


MembreBDE::MembreBDE(float premierVersement) {
	this->listAsso = nullptr;
	this->nbAsso = 0;
	this->solde = premierVersement; // grand prince
	this->histoConso = 0;
}


MembreBDE::MembreBDE(MembreBDE & melanie) {
	this->listAsso = melanie.listAsso;
	this->nbAsso = melanie.nbAsso;
	this->solde = melanie.solde; // grand prince
	this->histoConso = melanie.histoConso;
}

MembreBDE::~MembreBDE() {
	if (nbAsso > 0) {
		delete[] this->listAsso;
	}
}


void MembreBDE::inscriptionAsso(string nomAsso) {
	if (nbAsso == 0) {
		listAsso = new string[1];
		listAsso[0] = nomAsso;
		nbAsso++;
	}
	else {
		string * newList = new string[nbAsso + 1];
		for (size_t i = 0;i < nbAsso;i++) {
			newList[i] = listAsso[i];
		}
		newList[nbAsso] = nomAsso;
		nbAsso++;
		delete[] listAsso;
		listAsso = newList;
	}
}


void MembreBDE::consomme(float prix, int nombre) {
	solde -= ((float) nombre) * prix;
}

string MembreBDE::toString() {
	string affichage = "Liste des associations : ";
	for (int i = 0; i < nbAsso; i++) {
		affichage += listAsso[i] + ",";
	}
	affichage += " solde = " + std::to_string(solde) + " $";
	return affichage;
}