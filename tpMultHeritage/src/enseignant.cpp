/*
 * Enseignant.cpp
 *
 *  Created on: 19 sept. 2017
 *      Author: rodet
 */

#include "enseignant.hpp"


Enseignant::Enseignant() {
	// TODO Auto-generated constructor stub
	for(int i=0;i<NBUE;i++)
		for(int j = 0; j<NTYPE;j++)
			service[i][j]=0;
}

Enseignant::Enseignant(Personne & p) : Enseignant::Personne(p)
{
	for(int i=0;i<NBUE;i++)
			for(int j = 0; j<NTYPE;j++)
				service[i][j]=0;

}

Enseignant::Enseignant(std::string nom, std::string prenom) : Enseignant::Personne(nom,prenom)
{
	for(int i=0;i<NBUE;i++)
			for(int j = 0; j<NTYPE;j++)
				service[i][j]=0;

}
void Enseignant::addCours(TEns ens,UE eu,float nbHeure)
{
		service[eu][ens]+=nbHeure;
}

float Enseignant::serviceEqTD()
{
	float total=0;
	for(int i=0;i<NBUE;i++)
		for(int j = 0; j<NTYPE;j++)
		{
			if(j==Cours)
				total+=1.5*service[i][j]; // une heure de cours vaut 1.5 h de TD
			else
				total+=service[i][j];

		}
	return total;
}

std::string Enseignant::toString() {
	return "Enseignant : Nom : " + this->getNom() + " Prenom : "
		+ this->getPrenom() + " nombre d'heures : " + std::to_string(this->serviceEqTD());
}

void Enseignant::afficher() {
	std::cout << this->toString() << std::endl;
}

Enseignant::~Enseignant() {
	
}


float Enseignant::max() {
	return -1;
}

