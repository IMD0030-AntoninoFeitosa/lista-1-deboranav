#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int valor,  i;
    int contador = 0;

    for (i = 0; i < SIZE ; i++){
      cin >> valor;

      if (valor < 0){
        contador += 1;
      }

    }
    
    cout << contador;
  
    return 0;
}
