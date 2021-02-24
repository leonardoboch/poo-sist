#pragma once
#include <iostream>
using namespace std;

class Pessoa {
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;

public:
	Pessoa(int diaNa, int mesNa, int anoNa); 
	void calcIdade(int diaAt, int mesAt, int anoAt);
	int getIdade();
	void printIdade();
};
