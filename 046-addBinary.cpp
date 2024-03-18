//<7 kyu>

// Implement a function that adds two numbers together and returns their sum in binary. The conversion can be done before, or after the addition.

// The binary number returned should be a string.

// Examples:(Input1, Input2 --> Output (explanation)))

// 1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
// 5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)

#include <cstdint>
#include <string>
#include <algorithm>

using namespace std;

string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum=a+b;
  string res;
  
  if(sum==0){
    return "0";
  }else{
  while (sum>0){
    uint64_t sisa=sum%2;
    res += (sisa == 0) ? '0' : '1';  
    sum/=2;
    }
  reverse(res.begin(),res.end());
  return res;
  }
}
