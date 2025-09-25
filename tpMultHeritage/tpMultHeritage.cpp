// tpMultHeritage.cpp : Defines the entry point for the application.
//

#include "tpMultHeritage.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	Etudiant etu1("Bobby", "Johnson");
	etu1.afficher();

	MembreBDE jb(-19);
	cout << jb.getSoldeArgent() << endl;

	string * test = new string("Haha");
	*test += " et bonjour";

	string pir = "piratens";
	string cski = "clubski";

	jb.inscriptionAsso((string) "BDE");
	jb.inscriptionAsso(pir);
	jb.inscriptionAsso(cski);

	const string* listdesAssos = jb.getListAsso();

	jb.rechargeCompte(1000);

	cout << listdesAssos[0] <<" " << listdesAssos[2] << ", solde : " << jb.getSoldeArgent() << endl;
	cout << test[0] << endl;

	string aff = jb.toString();
	cout << aff << endl;

	UsagerBDE Floflo("Florian", "Vidal", 25.0);
	Floflo.inscriptionAsso("BDE");
	Floflo.inscriptionAsso("clubSki");
	cout << Floflo.toString() << endl;
	Floflo.affichage();

	EtudiantBDE etu("tazz", "guerin", 423.0);
	etu.addNote(TS, 15);
	etu.addNote(Auto, 12);
	etu.addNote(TS, 17);
	etu.addNote(Info, 1);
	etu.inscriptionAsso("piratens");
	etu.inscriptionAsso("clubskixx");
	etu.consomme(0.40, 21);
	etu.affichage();
	return 0;
}
