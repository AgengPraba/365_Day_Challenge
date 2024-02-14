//<7 kyu>
// Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
// For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)
// Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)
// Note: The function accepts an integer and returns an integer.

#include <vector>
#include <string>
using namespace std;

int square_digits(int num) {
  string numStr=to_string(num);
  vector<string> arrSquare;
  string concat;
  int res;
  
  for(char e:numStr){
    int digit = e - '0'; 
    int square = digit * digit;
    arrSquare.push_back(to_string(square));
  }
  
  for(string e:arrSquare){
    concat+=e;
  }
  
  res=stoi(concat);
  
  return res;
}