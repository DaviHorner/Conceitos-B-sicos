//Embalagens de Luxo

// Entradas:

// O número de produtos produzidos (um número inteiro, positivo).
// Saídas:

// O número de produtos distribuídos em embalagens comuns (número inteiro).
// O número de produtos distribuídos em embalagens de luxo (número inteiro).


#include <iostream>
#include <math.h>

using namespace std;

int main(){

  int production,common,deluxe;

  cin>>production;

  deluxe = floor(production/3);
  common = production - deluxe;

  cout<< common <<endl;
  cout<< deluxe <<endl;

}
