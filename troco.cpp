#include <iostream>

using namespace std;

int main(){

  int compra_valor,valor_cliente,troco,nota_20,nota_10,nota_5,nota_2,nota_1;

  cin >> valor_cliente;
  cin >> compra_valor;


  troco = valor_cliente - compra_valor ;

  nota_20 = troco/20;
  nota_10 = (troco - (nota_20*20))/10;
  nota_5 = (troco - (nota_20*20) - (nota_10*10))/5;
  nota_2 = (troco - (nota_20*20) - (nota_10*10) - (nota_5*5))/2;
  nota_1 = (troco - (nota_20*20) - (nota_10*10) - (nota_5*5) - (nota_2*2))/1;

  cout << nota_20 << endl;
  cout << nota_10 << endl;
  cout << nota_5 << endl;
  cout << nota_2 << endl;
  cout << nota_1 << endl;
}
