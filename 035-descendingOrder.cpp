//<7 kyu>

// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

// Examples:
// Input: 42145 Output: 54421

// Input: 145263 Output: 654321

// Input: 123456789 Output: 987654321

#include <cinttypes>
#include <vector>
#include <algorithm>
using namespace std;

uint64_t descendingOrder(uint64_t a)
{
  vector<int> digit;
  
  if(a==0){
    digit.push_back(0);
  }
  
  while (a>0){
    digit.insert(digit.begin(),a%10);
    a/=10;
  }
  
  sort(digit.rbegin(),digit.rend());
  
  uint64_t result=0;
  for(int e:digit){
    result=result*10+e;
  }
  
  return result;
}
 