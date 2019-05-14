#pragma once
#include <string>
#include "C:\Users\t0114312\source\repos\Data\Data\Data.h"
using namespace std;

class Contacto {
private:
	string nome, email;
	int telefone;
	Data dataNasc;
public:
	Contacto();
	Contacto(string nome, string email, int telefone, Data d);
	Contacto(const Contacto &c);
	bool setTel(int telefone);
	bool setNome(string nome);
	bool setEmail(string email);
	int getTel();
	string getNome();
	string getEmail();
	string ToString();
	Data getData();
	int calcIdade();
	void setDN(Data d);
};