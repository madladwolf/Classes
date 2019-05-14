#include "Data.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int x;
	Data d1;
	Data d2(d1);
	Data d3(2001, 12, 10);
	cout << d3.getAno();
	d2.setDia(14);
	cout << "\n" + d3.toString();
	cout << "\n" + d2.toString();
	cout << "\nDigite o ano";
	cin >> x;
	if (d2.setAno(x) == true)
		cout << "ez pz\n";
	else
		cout << "ERROOOO";
	cout << d3.diferente2Datas(d2);
	system("pause");
}