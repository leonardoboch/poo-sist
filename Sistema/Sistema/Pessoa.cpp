#include "Pessoa.h"
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa) {
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	idadeP = 0;
}

void Pessoa::calcIdade(int diaAt, int mesAt, int anoAt) {
	idadeP = anoAt - anoP;

	if (mesAt < mesP) {
		idadeP++;
	}
	else if (mesAt == mesP) {
		if (diaAt < diaP) {
			idadeP++;
		}
	}
}

int Pessoa::getIdade() {
	return idadeP;
}
void Pessoa::printIdade() {
	cout << idadeP << endl;
}