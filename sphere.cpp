#include <iostream>
#include <math.h>
using namespace std;

int main(){

  float raio,value_area,value_volume,value_diam;

  cin>>raio;

  value_diam = 2 * raio;
  value_area = 4 * 3.14 * (pow(raio,2));
  value_volume = (4*3.14*(pow(raio,3)))/3 ;

  cout << value_diam << endl;
  cout << value_area << endl;
  cout << value_volume << endl;

}
