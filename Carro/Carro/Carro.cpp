#include "Carro.h"

bool Carro::abastecer(int total, int atuais, int abastecimento) {
	if (atuais + abastecimento <= total) {
		total += abastecimento;
		return true;
	}
	else {
		return false;
	}
}

bool Carro::registarSaida(double totalKm, double kmRegist, double consumoMedio) {
	totalKm += kmRegist;
	double combGast = 
}