#include "Pessoa.h"
using namespace std;

int main()
{
    Pessoa Einstein(14,3,1879);
    Pessoa Newton(4,1,1643);
    Einstein.calcIdade(24, 2, 2021);
    Newton.calcIdade(24, 2, 2021);
    cout << "A idade de Einstein seria: " << endl;
    Einstein.printIdade();
    Newton.printIdade();
    cout << "A idade de Newton seria: " << endl;
}
