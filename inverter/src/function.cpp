#include <iostream>
#include <array>
#include <vector>
#include <string>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int s = arr.size();
    for(int i= 0; i < s/2; i++){
    swap(arr[i], arr[s-i-1]);
     }
}
