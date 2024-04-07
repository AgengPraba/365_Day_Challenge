// <8 kyu>

// Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

// [1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24

#include <vector>
using namespace std;

int grow(vector<int> nums) {
  int res=1;
  for(int e:nums){
    res*=e;
  }
  return res;
}