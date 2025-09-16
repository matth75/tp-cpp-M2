#include "../include/Chaine.hpp"

Chaine::Chaine()
{
	carChain =  nullptr;
	length = 0;
}

Chaine::Chaine(char car, int nb)
{
	// Constructor for 1 character

	// TODO: Assert if nb >= 1
	carChain = new char[nb + 1];
	carChain[0] = car;
	carChain[nb + 1] = '\0';
	length = nb;
}

Chaine::Chaine(Chaine& newChaine)
{
	length = newChaine.length;
	carChain = new char[length];
	std::strcpy(carChain, (const char*)newChaine.carChain);
}

Chaine::Chaine(const char* str)
{
	// Exhaustive co nstructor
	size_t len = std::strlen(str);
	length = (int) len;
	carChain = new char[len];
	std::strcpy(carChain, str);
}

void Chaine::afficher()
{
	for (int i = 0;i < length;i++)
	{
		std::cout << carChain[i];
	}
	std::cout << '\n';
}

char Chaine::retournerElement(int i)
{
	if ((i >= length) || (i < 0))
	{
		std::cout << "index i out of bounds \n";
		return '\0';
	}
	else
	{
		return carChain[i];
	}
}

void Chaine::changerElement(char c, int i)
{
	if ((i >= length) || (i < 0))
	{
		std::cout << "index i out of bounds \n";
	}
	else
	{
		carChain[i] = c;
	}
}

Chaine & Chaine::operator+=(const Chaine& newChaine)
{
	length += newChaine.length;
	char* newCarChain = new char[length];
	newCarChain[0] = '\0';
	strcat(newCarChain, carChain);
	strcat(newCarChain, newChaine.carChain);
	
	carChain = newCarChain;
	return *this;
}

Chaine& Chaine::operator=(const Chaine& newChaine)
{
	strcpy(carChain, newChaine.carChain);
	length = newChaine.length;
	return *this;
}

bool Chaine::operator==(Chaine& newChaine)
{
	return (strcmp(carChain, newChaine.carChain) == 0);
}

char& Chaine::operator[](int pos) 
{
	return carChain[pos];
}