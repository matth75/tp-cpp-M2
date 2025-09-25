#pragma once

#include <string>

using namespace std;

class MembreBDE {
private:
	string* listAsso;
	int nbAsso;
	float solde;
	int histoConso;

public:
	// getters
	int getHistoriqueConso() const { return histoConso; };
	float getSoldeArgent() const { return solde; };
	const string* getListAsso() const { return listAsso; };
	int getNbAsso() const { return nbAsso; };

	MembreBDE();
	MembreBDE(float premierVersement);
	MembreBDE(MembreBDE & melanie);
	~MembreBDE();

	void inscriptionAsso(string nomAsso);
	void rechargeCompte(float montant) { solde += montant; };
	void consomme(float prix, int nombre);
	virtual string toString();
};