#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, i;
    int soma = 0;

    cin >> m;

    cin >> n;

    if (n > 0){

      for (i = 0; i < n; i++){
        soma = soma + (m + i); 
      }

    }

    if (n < 0){

      n = n * -1;

      for (i = 0; i < n; i++){

        soma = soma + (m - i); 
      }

    }
    
    cout << soma; 
    

    return 0;
}
