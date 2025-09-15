// tpHeritage.cpp : Defines the entry point for the application.
//

#include "main.h"
#include "src/enseignant.hpp"
#include "src/etudiant.hpp"
#include <list>

using namespace std;

int main()
{
	// Personne class is abstract
	
	//Personne pers1;
	//std::string name = pers1.getNom();
	//cout << name << endl;
	//std::string othername = "Seguy";
	//pers1.setNom(othername);
	//pers1.setPrenom("LeSof");
	//cout << pers1.getPrenom() << " " << pers1.getNom() << endl;

	//Personne pers2("JACQUIER", "JB");
	//cout << pers2.getPrenom() << " " << pers2.getNom() << endl;

	//Personne pers3(pers1);
	//cout << pers3.getPrenom() << " " << pers3.getNom() << endl;
	//cout << pers3.toString() << endl;
	//pers2.afficher();
	//cout << "Hello CMake." << endl;

	
	Etudiant yolo;
	//Etudiant mamamia(pers2);
	//mamamia.afficher();

	Etudiant pilou("PILOU", "FILOU");
	pilou.afficher();
	pilou.addNote(Auto, 19.5);
	pilou.addNote(Auto, 7.21);
	pilou.addNote(TS, 17);
	cout << "TS : " << pilou.moyenneUE(TS) << " Auto : " << pilou.moyenneUE(Auto) << " Elec : " << pilou.moyenneUE(Info) << endl;
	
	pilou.addNote(Info, 14);
	pilou.addNote(Info, 16.5);

	//cout << "moyenne generale de : " << pilou.toString() << " = " << pilou.moyenneEtudiant() << endl;

	pilou.afficher();

	Etudiant* e1 = new Etudiant("Pradel", "Robin");
	Etudiant* e2 = new Etudiant("Durieu", "Samuel");

	e1->addNote(TS, 12);
	e2->addNote(Elec, 15);

	Enseignant Melito("Personnaz", "Nietzche");
	Melito.addCours(TD, TS, 13);
	Melito.afficher();

	std::list<Etudiant> students;
	std::string listPrenoms[] = {"Romain", "Luc", "Fabrice", "Chloe"};
	std::string listNoms[] = {"Malibu", "Torchon", "Chiffon", "Carpette"};

	for (size_t i = 0;i < 4;i++) {
		students.push_back(Etudiant(listPrenoms[i], listNoms[i]));
	}

	auto iterator = students.begin();
	iterator->addNote(Auto, 15);
	iterator->addNote(Info, 12);

	std::advance(iterator, 1);
	iterator->addNote(TS, 19.99);
	iterator->addNote(Auto, 16.5);

	std::advance(iterator, 1);
	Etudiant& Fabi = *iterator;
	Fabi.addNote(TS, 14.32);
	Fabi.addNote(TS, 11.57);
	Fabi.addNote(Auto, 8);
	Fabi.addNote(Elec, 14.32);

	students.back().addNote(TS, 12.3);
	students.back().addNote(Info, 7.53);
	students.back().addNote(Info, 12.3);
	students.back().addNote(Info, 2.1);


	students.sort(compMerite);

	//iterator = students.begin();
	//*iterator = pilou;
	iterator = students.begin();
	if (*iterator < Fabi) {
		cout << "Inferiore" << endl;
	}
	else cout << "Superiore" << endl;


	for (auto &pers : students) {
		pers.afficher();
	}
	return 0;
}
