// NumeroDeDiagonais = [N * (N - 3)] / 2
#include <iostream>
using namespace std;

int main(){
  int num_diagonal, num_lado;
  cin >> num_lado;
  num_diagonal = (num_lado*(num_lado-3))/2;
  cout << num_diagonal << endl;
}
