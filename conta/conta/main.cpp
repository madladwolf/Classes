#include "conta.h"
#include <string>


int main() {
	string n;
	int e;
	double s;
	bool aux = false;
	Conta c1;

	do {
		cout << "Insira o nome pretendido: \n";
		cin >> n;
		if (c1.setTitular(n)) {
			cout << "Correct\n";
		}
		else {
			cout << "This is not correct\n";
		}
	} while (!c1.setTitular(n));


	do {
		cout << "Insira o estado da conta \n1-Ativo\n0-Desativo\n-1 - congelada\n";
		cin >> e;
		if (c1.setEstado(e)) {
			cout << "Correct\n";
		}
		else {
			cout << "This is not correct\n";
		}
	} while (!c1.setEstado(e));


	do {
		cout << "Insira a quantidade de deposito\n";
		cin >> s;
		if (c1.depositar(s)) {
			cout << "Deposito efetuado com sucesso\n";
			aux = true;
		}
		else {
			cout << "Deposito nao efetuado\n";
		}
	} while (!aux);

	cout << c1.toString();

	system("pause");
}