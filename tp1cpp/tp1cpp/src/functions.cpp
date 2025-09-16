#include "../include/functions.hpp"

// Exercice 2
double exp(double x, int N)
{
	double exponential_value = 0;
	for (int i = 0;i <= N;i++)
	{
		exponential_value = exponential_value + pow(x, (double)i) / tgamma(i + 1);
	}
	return exponential_value;
}


// Exercice 3
std::vector<char> chiffresRomains(int n)
{	
	std::vector<char> chiffres;
	if (n < 0 or n > 499)
	{
		return std::vector<char> {'e'};
	}
	while (n > 0)
	{
		if (n / 100 > 0)
		{
			if (n / 400 > 0)
			{
				chiffres.push_back('C');
				chiffres.push_back('D');
				n -= 400;
				continue;
			}
			else 
			{
				n = n - 100;
				chiffres.push_back('C');
				continue;
			}
		}
		if (n / 50 > 0)
		{
			if (n / 90 > 0)
			{
				chiffres.push_back('X');
				chiffres.push_back('C');
				n -= 90;
				continue;
			}
			else 
			{
				n = n - 50;
				chiffres.push_back('L');
				continue;
			}
		}
		if (n / 10 > 0)
		{
			if (n / 40 > 0)
			{
				chiffres.push_back('X');
				chiffres.push_back('L');
				n = n - 40;
				continue;
			}
			else
			{
				n = n - 10;
				chiffres.push_back('X');
				continue;
			}
		}
		if (n / 5 > 0)
		{
			if (n / 9 > 0)
			{
				chiffres.push_back('I');
				chiffres.push_back('X');
				n = n - 9;
				continue;
			}
			else
			{
				n = n - 5;
				chiffres.push_back('V');
				continue;
			}
		}
		if (n > 0)
		{
			if (n == 4)
			{
				chiffres.push_back('I');
				chiffres.push_back('V');
				n = n - 4;
			}
			else 
			{
				n = n - 1;
				chiffres.push_back('I');
				continue;
			}
			
		}
	}
	return chiffres;
}


// Exercice 4
int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;

	int res = 1;
	while (n > 0)
	{
		res = res * n;
		n--;
	}
	return res;
}


// Exercice 6
int anneeBissextile(int annee)
{
	if (annee < 1582)
		return -1;
	if ((annee % 4 != 0) || (annee % 100 == 0) && (annee % 400 != 0))
		return 0;
	return 1;
}


// Exercice 8
int AireVolSphere(double rayon, double* ptrAire, double* ptrVol)
{
	if (rayon < 0)
		return -1;
	*ptrAire = 4.0 * M_PI * pow(rayon, 2);
	*ptrVol = (4.0 / 3.0) * M_PI * pow(rayon, 3);
	return 0;
}