//<8 kyu>

// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

// Example(Input => Output):
// 35231 => [1,3,2,5,3]
// 0 => [0]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> digitize(unsigned long n) 
{        
    vector<int> arr;
  
    if (n == 0) {
        arr.push_back(0);
        return arr;
    }

    while (n > 0) {
        int digit = n % 10;
        arr.push_back(digit);
        n /= 10;
    }

    return arr;
}
  