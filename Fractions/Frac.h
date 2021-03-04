#pragma once
class Frac
{
public:	
	Frac();
	Frac(int n, int d);
	int getNumer();
	int getDenom();
	void setNumer(int);
	void setDenom(int);
	void reduce();
	Frac operator+(Frac);
	Frac operator-(Frac);
	Frac operator*(Frac);
	Frac operator/(Frac);
	~Frac();
private:
	int n, d;

};

