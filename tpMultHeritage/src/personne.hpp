#pragma once

#include <string>
#include "iostream"


class Personne {
private:
	std::string nom;
	std::string prenom;

public:
	Personne();
	Personne(std::string aString, std::string aPrenom);
	std::string getNom();
	std::string getPrenom();

	void setNom(std::string s_nom);
	void setPrenom(std::string s_prenom) { prenom = s_prenom; };
	virtual std::string toString();
	virtual void afficher();
	virtual float max() = 0;
	Personne(const Personne& other) : nom(other.nom), prenom(other.prenom) {}
	virtual ~Personne() = default;
	bool operator<(Personne& p);
};