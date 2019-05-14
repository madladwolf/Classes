#include "conta.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

Conta::Conta() {
	nome = "Sem Nome";
	estado = 0;
	saldo = 0;
}
Conta::Conta(string t, int e, double s) {
	if (!setTitular(t)) nome = "Sem nome";
	if (!setEstado(e)) estado = 0;
	saldo = 0; depositar(s);
}
Conta::Conta(string t) {
	if (!setTitular(t)) nome = "Sem Nome";
	saldo = 0; estado = 1;
}
Conta::Conta(const Conta &c) {
	nome = c.nome;
	estado = c.estado;
	saldo = c.saldo;
}
string Conta::getTitular() {
	return nome;
}
double Conta::getSaldo() {
	return saldo;
}
string Conta::getEstado() {
	if (estado == 1) return "Ativa";
	if (estado == 0) return "Desativa";
	if (estado == -1) return "Bloqueada";
}
bool Conta::setTitular(string t) {
	if (t != "") { nome = t; return true; }
	return false;
}
bool Conta::setEstado(int e) {
	if (e == 1 || e == 0 || e == -1) {
		estado = e; 
		return true;
	}
	return false;
}
bool Conta::levantar(double v) {
	if (v > 0 && v <= saldo && estado == 1) {
		saldo -= v;
		return true;
	}
	return false;
}
bool Conta::depositar(double v) {
	if (v > 0 && estado == 1) { 
		saldo += v; 
		return true;
	}
	return false;
}
double Conta::credito() {
	if (saldo >= 500 && saldo <= 1000) return saldo * 0.1;
	if (saldo >= 1000 && saldo < 2000) return saldo * 0.3;
	if (saldo >= 2000) return saldo * 0.35;
}
string Conta::toString() {
	return nome + " " + to_string(saldo) + " " + getEstado() + "\n";
}

