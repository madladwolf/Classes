#include "Contacto.h"

Contacto::Contacto() {
	nome = "Joao";
	email = "asd@gmail.com";
	telefone = 111111111;
}

Contacto::Contacto(string n, string e, int tel, Data d) {
	if (!setNome(n)) nome = "Novo";
	if (!setEmail(e)) email = "Novo";
	if (!setTel(tel)) telefone = 123456789;
	dataNasc = d;
}

Contacto::Contacto(const Contacto &c) {
	nome = c.nome;
	email = c.email;
	telefone = c.telefone;
	dataNasc = c.dataNasc;
}

bool Contacto::setNome(string n) {
	if (n != " ") {
		return true;
		nome = n;
	}
	return false;
}

bool Contacto::setEmail(string e) {
	if (e != " ") {
		email = e;
		return true;
	}
	return false;
}
void Contacto::setDN(Data d) {
	dataNasc = d;
}
int Contacto::calcIdade() {
	return 2019 - dataNasc.getAno();
}

bool Contacto::setTel(int t) {
	if (t > 0) {
		telefone = t;
		return true;
	}
	return false;
}

string Contacto::getNome() { return nome; }
string Contacto::getEmail() { return email; }
int Contacto::getTel() { return telefone; }

string Contacto::ToString() { return "\nNome: " + nome + "\nEmail: " + email + "\nTelefone: " +"\n"+ to_string(telefone) + "\n" +dataNasc.toString()+"\n"; }