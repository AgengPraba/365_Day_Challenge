// <6 kyu>

// Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

// For example (Input --> Output):

// 39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
// 999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
// 4 --> 0 (because 4 is already a one-digit number)


#include <string>
using namespace std;

int persistence(long long n){
    int count = 0;
    while (n >= 10) { 
        string number = to_string(n);
        long long product = 1;
        for (char digit : number) {
             product *= (digit - '0'); 
        }
        n = product;
        count++;
    }
    return count;
}
