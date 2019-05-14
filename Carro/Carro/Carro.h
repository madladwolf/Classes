#pragma once
#include <stdio.h>
#include<iostream>
#include <string>
using namespace std;

class Carro {
private:
	string m;
	int deposito;
	double quantidadeCombust;
	double totalKm;
	double consumoMedio;
public:
	Carro();
	Carro(string m, double deposito, double quantidadeCombust, double totalKm, double consumoMedio);
	Carro(const Carro &c);
	bool abastecer(int total, int atuais, int abastecimento);
	bool registarSaida(double totalKm, double kmRegist);
};