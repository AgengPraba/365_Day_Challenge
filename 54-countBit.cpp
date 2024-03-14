//<6 kyu>

// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

#include <vector>
using namespace std;

unsigned int countBits(unsigned long long n){
  vector<int> biner;
  int res=0;
  
  while(n>0){
    int sisa=n%2;
    biner.insert(biner.begin(),sisa);
    n/=2;
  }
  
  for(auto e:biner){
    if(e==1){
      res+=1;
    }
  }
  return res;
}