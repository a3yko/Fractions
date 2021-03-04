#include "stdafx.h"
#include "Frac.h"
#include <iostream>
 
using namespace std;

//default fraction
Frac::Frac()
{
	n = 0;
	d = 1;
}

//Constructs proper fractions
Frac::Frac(int n, int d)
{
	if (n == 0 || d == 0)
	{
		cout << " This is not a real fraction, enter a new fraction " << endl;
	}
	if (d < 0)
	{
		n = n*-1;
		d = d*-1;
	}
	reduce();
}


// Deconstructs the fractions
Frac::~Frac()
{
}


// reduces the fraction to simplest terms
void Frac::reduce()
{
	for (int i = n*d; i > 1; i--)
	{
		if (n %i == 0 && d % i == 0)
		{
			n = n / i;
			d = d / i;
		}
	}
}



//sets the numerator for the fraction
void Frac::setNumer(int numerator)
{
	n = numerator;
}


//sets the denominator for the fraction
void Frac::setDenom(int denominator)
{
	d = denominator;
}


//returns the numerator
int Frac::getNumer()
{
	return n;
}


//returns the denominator
int Frac::getDenom()
{
	return d;
}


// Adds two fractions together
Frac Frac::operator+(Frac one)
{
	Frac finalFrac;
	finalFrac.setNumer(one.getNumer()*finalFrac.getDenom() + finalFrac.getNumer()*one.getDenom());
	finalFrac.setDenom(one.getDenom()*finalFrac.getDenom());

}


// Subtracts two fractions
Frac Frac::operator-(Frac one)
{
	Frac finalFrac;
	finalFrac.setNumer(one.getNumer()*finalFrac.getDenom() - finalFrac.getNumer()*one.getDenom());
	finalFrac.setDenom(one.getDenom()*finalFrac.getDenom());
}


// Multiplies two fractions together
Frac Frac::operator*(Frac one)
{
	Frac finalFrac;
	finalFrac.setNumer(one.getNumer()*finalFrac.getNumer());
	finalFrac.setDenom(one.getDenom()*finalFrac.getDenom());
}


// Divides two fractions
Frac Frac::operator/(Frac one)
{
	Frac finalFrac;
	finalFrac.setNumer(one.getNumer()*finalFrac.getDenom());
	finalFrac.setDenom(one.getDenom()*finalFrac.getNumer());
}

