#include "Data.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std;

Data::Data() { ano = 2000; mes = 1; dia = 1; }

Data::Data(int a, int m, int d) {
	if (!setAno(a)) this->ano = 2000;
	if (!setMes(m)) this->mes = 1;
	if (!setDia(d)) this->dia = 1;
}

Data::Data(const Data &d) {
	ano = d.ano; mes = d.mes; dia = d.dia;
}
int Data::getAno() { return ano; }
int Data::getMes() { return mes; }
int Data::getDia() { return dia; }



bool Data::setAno(int a) {
	if (a > 1500) { ano = a; return true; }
	return false;
}

bool Data::setMes(int mes) {
	if (mes < 1 || mes > 12) {
		this->mes = mes;
	}
	else {
		return false;
	}
}

bool Data::setDia(int d) {
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		if (d >= 1 && d <= 31) {
			dia = d; return true;
		}
	}
	else {
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
			if (d >= 1 && d <= 30) {
				dia = d; return true;
			}
		}
		else {
			if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
				if (d <= 1 && d >= 29) {
					dia = d; return true;
				}
			}
			else {
				if (dia <= 1 && dia >= 28) {
					dia = d; return true;
				}
			}
		}
		return false;
	}
}


string Data::toString() {
	return to_string(dia) + " - " + to_string(mes) + " - " + to_string(ano);
}

/*int Data::diferente2Datas(const Data &d) {
	return << abs(this->ano - d.ano);
}*/
