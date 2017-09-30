// Entradas (sistema de coordenadas vermelho da figura):

// A largura da janela (uma linha com um número inteiro);
// A altura da janela (uma linha com um número inteiro);
// A coordenada X do mouse (uma linha com um número inteiro);
// A coordenada Y do mouse (uma linha com um número inteiro).
// Saídas (sistema de coordenas azul da figura):

// A coordenada X do mouse convertida para o sistema de coordenadas dos dados (número real);
// A coordenada Y do mouse convertida para o sistema de coordenadas dos dados (número real).
// Exemplo de Entrada:
#include <iostream>

using namespace std;

int main(){

  int height,width,mouse_x,mouse_y,middle_height,middle_width;
  double cord_x, cord_y;

  cin>>width;
  cin>>height;
  cin>>mouse_x;
  cin>>mouse_y;

  middle_width = width / 2;
  middle_height = height / 2;

  cord_x = (double)(mouse_x-middle_width)/middle_width;
  cord_y = (double)(mouse_y-middle_height)*(-1)/middle_height;

  cout<< cord_x <<endl;
  cout<< cord_y <<endl;

}
