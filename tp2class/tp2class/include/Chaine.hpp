#include <iostream>
#include <cstring>

class Chaine {
private:
	char* carChain;
	int length;

public:
	Chaine();
	Chaine(char car, int nb);
	Chaine(Chaine& newChaine);
	Chaine(const char* str);

	~Chaine(){ delete[] carChain; };

	void afficher();

	int getLength() { return length; };
	char retournerElement(int i);
	void changerElement(char c, int i);

	Chaine & operator+=(const Chaine& newChaine);
	Chaine& operator=(const Chaine& newChaine);
	bool operator==( Chaine& newChaine);
	char & operator[](int pos);
};