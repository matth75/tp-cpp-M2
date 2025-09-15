#include "etudiant.hpp"

Etudiant::Etudiant() {
	for (int i = 0; i < NBUE; i++) {
		nbNote[i] = 0;
		notes[i] = nullptr;
	}
}

//Etudiant::Etudiant(int* nbNote, float** notes) {
//	for (int i = 0;i < NBUE;i++) {
//		this->nbNote[i] = nbNote[i];
//		this->notes[i] = new float[nbNote[i]]; // allocate some memory to notes[i]
//
//		for (int j = 0; j < nbNote[i];j++) {
//			this->notes[i][j] = notes[i][j];
//		}
//	}
//}
//

Etudiant::Etudiant(Personne& p) {
	this->setNom(p.getNom());
	this->setPrenom(p.getPrenom());
	for (int i = 0; i < NBUE; i++) {
		this->nbNote[i] = 0;
		this->notes[i] = nullptr;
	}
}

Etudiant::Etudiant(std::string nom, std::string prenom) {
	this->setNom(nom);
	this->setPrenom(prenom);
	for (int i = 0; i < NBUE; i++) {
		this->nbNote[i] = 0;
		this->notes[i] = nullptr;
	}
}

int* Etudiant::getNbNotes() {
	return this->nbNote;
}

float** Etudiant::getNotes() {
	return this->notes;
}

void Etudiant::addNote(UE eu, float val) {
	int nbue = static_cast<int>(eu);
	this->nbNote[nbue]++;
	int n = nbNote[nbue];  // add 1 to the number of UE notes

	if (n == 1) {
		this->notes[nbue] = new float[1];
		this->notes[nbue][0] = val;
	}
	else {
		// copy old notes values in new array
		float* newUeNotes = new float[n];
		for (int i = 0;i < n - 1;i++) {
			newUeNotes[i] = this->notes[nbue][i];
		}
		newUeNotes[n - 1] = val; // add new note

		// free memory and reallocate
		delete[] this->notes[nbue];
		this->notes[nbue] = newUeNotes;
	}
}

float Etudiant::moyenneUE(UE eu) {
	float moyenne = 0.0;

	if (nbNote[eu] == 0) {
		return -1.0;
	}

	for (int i = 0; i < nbNote[eu];i++) {
		moyenne += notes[eu][i];
	}

	return moyenne / (float) nbNote[eu];

}

float Etudiant::moyenneUE(int idx) {
	float moyenne = 0.0;

	if (nbNote[idx] == 0) {
		return -1.0;
	}

	for (int i = 0; i < nbNote[idx];i++) {
		moyenne += notes[idx][i];
	}

	return moyenne / (float)nbNote[idx];
}

float Etudiant::moyenneEtudiant() {
	float moyenne = 0.0;
	int nbUeToSumUp = 0;
	float last_moyenne;
	for (int i = 0; i < NBUE; i++) {
		last_moyenne = this->moyenneUE(i);
		if (last_moyenne >= 0.0) {
			nbUeToSumUp++;
			moyenne += last_moyenne;

		}
	}
	if (nbUeToSumUp == 0) return -1;
	return (moyenne / (float) nbUeToSumUp);
}

Etudiant::~Etudiant() {
	for (int i = 0; i < NBUE;i++) {
		delete[] notes[i];
	}
}

std::string Etudiant::toString() {
	return "Etudiant : Nom : " + this->getPrenom() + " Prenom : " +  this->getNom() + " moyenne : " + std::to_string(this->moyenneEtudiant());
}

void Etudiant::afficher() {
	std::cout << this->toString() << std::endl;
}

float Etudiant::max() {
	return -1.0;
}


bool compMerite(Etudiant& etu1, Etudiant& etu2) {
	return (etu1.moyenneEtudiant() < etu2.moyenneEtudiant());
}