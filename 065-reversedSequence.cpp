// <8 kyu>

// Build a function that returns an array of integers from n to 1 where n>0.

// Example : n=5 --> [5,4,3,2,1]

#include<vector>

using namespace std;

vector<int> reverseSeq(int n) {
  vector<int> res;
  
  for(int i=n; i>0; i--){
    res.insert(res.end(),i);
  }
  return res;
}