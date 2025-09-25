#include "usagerBDE.h"

using namespace std;

string UsagerBDE::toString() {
	return this->Personne::toString() + " / " + this->MembreBDE::toString();
}