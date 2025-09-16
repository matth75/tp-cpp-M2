// tp1cpp.cpp : Defines the entry point for the application.
//

#include "../include/tp1cpp.h"
#include "../include/functions.hpp"
using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << exp(1, 100) << endl;

	int res = factorial(5);
	cout << res << endl;

	// Exercice 3
	//while (true)
	//{
	//	std::vector<char> nromain;
	//	int n;
	//	cout << "enter number : ";
	//	cin >> n;
	//	nromain = chiffresRomains(n);
	//	for (size_t i = 0; i < nromain.size(); i++)
	//		std::cout << nromain[i];
	//	cout << " " << endl;
	//}

	// Exercice 6
	//while (true)
	//{
	//	int annee;
	//	cout << "enter year : ";
	//	cin >> annee;
	//	int estBissextile = anneeBissextile(annee);
	//	cout << estBissextile << endl;
	//}

	// Exercice 7
	int nombre;
	int* ptr1;
	int* ptr2;
	ptr1 = &nombre;
	*ptr1 = 10;
	cout << "La variable nombre vaut :" << nombre << endl; 
	ptr2 = ptr1;
	*ptr2 = 3346;
	cout << "La variable nombre vaut maintenant : " << nombre << endl;
	

	// Exercice 8
	double aire;
	double vol;
	double rayon = 4.5;
	AireVolSphere(rayon, &aire, &vol);
	cout << "aire :" << aire << "vol :" << vol << endl;

	return 0;
}
