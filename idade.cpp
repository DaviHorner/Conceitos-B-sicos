#include <iostream>
using namespace std;

int main(){
  int idade_ano, idade_mes, idade_semana, idade_dia;
  cin>>idade_ano;
  idade_mes = idade_ano * 12;
  idade_semana = idade_ano * 48;
  idade_dia = idade_ano * 12 * 30;
  cout << idade_mes << endl;
  cout << idade_semana << endl;
  cout << idade_dia << endl;
}
