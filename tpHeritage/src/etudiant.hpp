#pragma once

#include "personne.hpp"

const int NBUE = 5;

enum UE {Auto = 0, Info, Elec, TS, ConvEnergie};

class Etudiant :public Personne {
private:
	float* notes[NBUE];
	int nbNote[NBUE];

public:
	float** getNotes();
	int * getNbNotes();
	Etudiant();
	Etudiant(Personne& p);
	Etudiant(std::string nom, std::string prenom);
	~Etudiant();
	void addNote(UE eu, float val);
	float moyenneUE(UE eu);
	float moyenneUE(int idx);
	float moyenneEtudiant();
	std::string toString() override;
	void afficher() override;
	float max() override;
	//Etudiant(const Etudiant&) = default;
	Etudiant& operator=(const Etudiant&) = default;
	//void addNote(int* nbNote, float** notes);

};


bool compMerite(Etudiant& etu1, Etudiant& etu2);