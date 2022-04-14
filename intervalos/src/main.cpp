/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <iomanip>
using std::setprecision;
using namespace std;

int main(void)
{
  int x;
  int cont = 0;
  int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0, foraint = 0;
  float porcent1, porcent2, porcent3, porcent4, porcentFI;


  while( cin >> std::ws >> x ) {
  
    cont = cont + 1;

    if (x >= 0 && x < 25) {
      intervalo1 = 1 + intervalo1;
    }

    if (x >= 25 && x < 50) {
      intervalo2 = 1 + intervalo2;
    }

    if (x >= 50 && x < 75) {
      intervalo3 = 1 + intervalo3;
    }

    if (x >= 75 && x < 100) {
      intervalo4 = 1 + intervalo4;
    }

    if (x < 0 || x > 99) {
      foraint = foraint + 1;
    }
    
  }

  porcent1 = (100* float (intervalo1) )/cont;
  porcent2 = (100* float (intervalo2) )/cont;
  porcent3 = (100* float (intervalo3) )/cont;
  porcent4 = (100* float (intervalo4) )/cont;
  porcentFI = (100* float (foraint) )/cont;


  cout << setprecision(4) << porcent1 << endl; 
  cout << setprecision(4) << porcent2 << endl;
  cout << setprecision(4) << porcent3 << endl;
  cout << setprecision(4) << porcent4 << endl;
  cout << setprecision(4) << porcentFI << endl;


  

  return 0;
}
