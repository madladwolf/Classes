#include "Contacto.h"

int main(){
	//var
	string email, nome;
	int tel, ano;
	//main
	Contacto c1;
	Data d1;
	do {
		cout << "Insira o nome: ";
		cin >> nome;
	} while (!c1.setNome(nome));
	do {
		cout << "\n Insira o email: ";
		cin >> email;
	} while (!c1.setEmail(email));
	
	do {
		cout << "\n Insira o telefone: ";
		cin >> tel;
	} while (!c1.setTel(tel));
	do {
		cout << "\n Insira a data: ";
		cin >> ano;
	} while (!d1.setAno(ano));
	c1.setDN(d1);
	cout << c1.ToString();
	cout << c1.calcIdade() << "\n";

	system("pause");
}