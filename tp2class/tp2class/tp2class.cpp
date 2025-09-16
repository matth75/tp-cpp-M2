// tp2class.cpp : Defines the entry point for the application.
//

#include "tp2class.h"
#include "include/Chaine.hpp"

using namespace std;

int main()
{	
	const char* HELLO = "Hello Constructors";
	const char* ARGH = "J'ai eternue.";
	Chaine * chaine1 = new Chaine();
	Chaine * chaine2 = new Chaine('a', 10);
	Chaine * chaine3 = new Chaine(HELLO);
	Chaine * chaine4 = new Chaine(*chaine3);

	chaine3->afficher();
	chaine1->afficher();
	chaine2->afficher();
	chaine4->afficher();

	cout << chaine2->getLength() << '\n';
	cout << chaine4->retournerElement(7) << '\n';
	cout << chaine4->retournerElement(22) << '\n';

	chaine4->changerElement('a', 1);
	chaine4->afficher();

	Chaine* chaine5 = new Chaine(ARGH);
	*chaine5 += *chaine4;
	chaine5->afficher();
	*chaine2 = *chaine5;
	chaine2->afficher();
	cout << (*chaine2 == *chaine5) << endl;
	return 0;
}
