#pragma once
#include <stdio.h>
#include <iostream>
#include<string>
using namespace std;
class Conta {
private:
	string nome;
	double saldo;
	int estado;
public:
	Conta();
	Conta(string t, int e, double s);
	Conta(string t);
	Conta(const Conta &c);
	string getTitular();
	double getSaldo();
	string getEstado();
	bool setTitular(string t);
	bool setEstado(int e);
	bool levantar(double v);
	bool depositar(double v);
	double credito();
	string toString();
};