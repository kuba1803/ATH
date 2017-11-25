// asd1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>
#include <algorithm>

using namespace std;
unsigned long int const n = 200000;



void sort_b(double * tab, int size) {
	for (int i = 0; i < size; i++) {
		int count = 0;
		for (int j = 0; j < size - i-1; j++)
		{
			if (tab[j] > tab[j + 1]) {
				count++;
				swap(tab[j], tab[j + 1]);
			}
		}
		if (count == 0)break;
	}
}

int main()
{
	unsigned long int m;
	int k;
	double * tab = new double[n];
	time_t t;
	double tk, tp;
	double tc;
	srand((unsigned)time(&t));
	cout << "podaj ilosc wyrazow ciagu" << endl;
	cin >> m;
	do {
		cout << "podfaj numer procedury sortowania" << endl;
		cout << "1. Bombelkowe" << endl;
		cin >> k;
		cout << "ciag wylosowany" << endl;
		for (int i = 0; i < m; i++) {
			tab[i] = rand() % 10000;
			cout << tab[i] << " ";
		}
		cout << endl;
		switch(k) {
			case 1: {
				cout << "procedura bombelkowa \n";
				tp = clock();
				sort_b(tab, m);
				tk = clock();
				tc = (tk - tp)/double(CLOCKS_PER_SEC);
				cout << "czas sortowania = " << tc << endl;
				break;
			}
			case 0:break;

		}
		cout << "ciag posortowany :" << endl;
		for (int i = 0; i < m; i++)cout << tab[i] << " ";
		cout << endl;
	} while (k!=0);
	delete tab;
    return 0;
}

