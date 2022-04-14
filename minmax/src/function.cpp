#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
  {
    int i;
    int min;
    int max;
    int pmin = 0;
    int pmax = 0;
  
    min = V[0];
    max = V[0];
    
    for(i = 0; i <n; i++){
      if (V[i] < min){
        min = V[i];
        pmin = i;
      }
      else {
        if (V[i] >= max){
          max = V[i];
          pmax = i;
        }
      }
    }
  
    return std::make_pair( pmin, pmax);
    
  }


int main(void){

  size_t n = 0;
  int x;
  int i = 0;
  int  V[20];
  pair<int, int> resultado;

  while (cin >> std::ws >> x){
    V[i] = x;
    n = n + 1;
    i++;
  }
  
  resultado = min_max( V, n );
  
  
  cout  << resultado.first << " " << resultado.second; 
  

  

  return 0;
}
