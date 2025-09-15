#include "personne.hpp"

std::string Personne::getNom() {
	return this->nom;
}

std::string Personne::getPrenom() {
	return prenom;
}

void Personne::setNom(std::string s_nom) {
	nom = s_nom;
}

Personne::Personne() {
	prenom = "John";
	nom = "Doe";
}

Personne::Personne(std::string aNom, std::string aPrenom) {
	nom = aNom;
	prenom = aPrenom;
}

//Personne::Personne(Personne & p) {
//	nom = p.getNom();
//	prenom = p.getPrenom();
//}

void Personne::afficher() {
	std::cout << "Personne : Nom : " << nom << " Prenom : " << prenom << std::endl; 
}

std::string Personne::toString() {
	return "Nom : " + nom + " Prenom : " + prenom;
}

bool Personne::operator<(Personne & p) {
	return (this->getNom() < p.getNom());
}