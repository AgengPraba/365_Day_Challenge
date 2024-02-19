//<8 kyu>

// Given an array of integers, return a new array with each value doubled.
// For example:
// [1, 2, 3] --> [2, 4, 6]

#include <vector>
using namespace std;

vector<int> maps(const vector<int> & values) {
  vector<int> res;
  for(size_t i=0; i<values.size(); i++){
    res.push_back(values[i]*2);
  }
  return res;
}