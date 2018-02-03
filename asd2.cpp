// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class dat {
public:
	int dzien;
	int miesiac;
	int rok;
	friend ostream & operator<<(ostream & o, const dat& d);
};
ostream & operator<<(ostream & o, const dat& d) {
	o << d.dzien << "-" << d.miesiac << "-" << d.rok << endl;
	return o;
}
class dane {
public:
	string nazwisko;
	string imie;
	string PESEL;
	dat data_urodzenia;
	friend ostream & operator<<(ostream & o, const dane& d);
	friend istream & operator>>(istream & i,  dane& d);
	
};
ostream & operator<<(ostream & o, const dane& d) {
	o << "Nazwisko: "<< d.nazwisko << endl;
	o << "Imie: " << d.imie << endl;
	o << "PESEL: " << d.PESEL << endl;
	o << "Data urodzenia: "<<d.data_urodzenia;
	return o;
}
istream & operator >> (istream & i,  dane& d) {
	cout << "Podaj Nazwisko" << endl;
	i >> d.nazwisko;
	cout << "Podaj Imie"<<endl;
	i >> d.imie;
	cout << "Podaj PESEL" << endl;
	i >> d.PESEL;
	cout << "Podaj dzien urodzenia" << endl;
	i >> d.data_urodzenia.dzien;
	cout << "Podaj miesiac urodzenia" << endl;
	i >> d.data_urodzenia.miesiac;
	cout << "Podaj rok urodzenia" << endl;
	i >> d.data_urodzenia.rok;

	return i;
}

class complex {
	double r;
	double i;
public:
	complex(double r, double i) :r(r), i(i) {};
	complex(const complex &c) :r(c.r), i(c.i) {};
	complex operator+(complex & a) {
		return complex(r + a.r, i + a.i);
	}
	complex operator-(complex & a) {
		return complex(r - a.r, i - a.i);
	}
	complex operator*(complex & a) {
		return complex(r*a.r-i*a.i, i*a.r+r*a.i);
	}
	complex operator/(complex & a) {
		return complex((r*a.r + i*a.i)/(a.i*a.i+a.r*a.r), (i*a.r - r*a.i) / (a.i*a.i + a.r*a.r));
	}
	friend ostream & operator<<(ostream & o, const complex& d);
};
ostream & operator<<(ostream & o, const complex& d) {
	if (d.r == 0 && d.i == 0) {
		o << 0;
		return o;
	}
	if(d.r!=0)o << d.r;
	if (d.i != 0) {
		if (d.r!=0 &&d.i >= 0)o << "+";
		if (d.i != 1 && d.i != -1)o << d.i;
		if (d.i == -1)o << "-";
		o << "i";
	}
	return o;
}
int main()
{
	int n;
	complex a(2, 3), b(1, 4);
	cout << a+b <<endl;
	cout << a - b<<endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cin >> n;
    return 0;
}

