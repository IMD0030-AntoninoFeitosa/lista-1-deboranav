#include "function.h"
#include <iostream>
using namespace std;

std::vector<unsigned int> fib_below_n( unsigned int n ){
      vector<unsigned int> vetor;
      int i = 2;
      int tam = 2;
    
      vetor.push_back(1);
      vetor.push_back(1);
      
      cin >> n; 

      while ((vetor[i-1] + vetor[i-2]) <= n){
          vetor.push_back(vetor[i-1] + vetor[i-2]) ;
          i++ ;
          tam++;
      }

        return vetor;
 
}
