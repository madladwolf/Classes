#pragma once
#include <string>
#include <iostream>
using namespace std;
class Data {
private: int mes, dia, ano;
public:Data();
	   Data(int a, int m, int d);
	   Data(const Data &d);
	   int getAno();
	   int getMes();
	   int getDia();
	   bool setAno(int ano);
	   bool setMes(int mes);
	   bool setDia(int dia);
	   int diferente2Datas(const Data &d);
	   string toString();
};