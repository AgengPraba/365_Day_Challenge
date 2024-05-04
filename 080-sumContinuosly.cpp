// <7 kyu>

// Make a function "add" that will be able to sum elements of list continuously and return a new list of sums.

// For example:

// add [1,2,3,4,5] == [1, 3, 6, 10, 15], because it's calculated like 
// this : [1, 1 + 2, 1 + 2 + 3, 1 + 2 + 3 + 4, 1 + 2 + 3 + 4 + 5]

#include <vector>

using namespace std;

vector<int> add(const vector<int>& arr)
{
    vector<int> res;
  
  for(int i=0; i<arr.size(); i++){
    int num=0;
    for(int j=0; j<=i; j++){
      num+=arr[j];
    }
    res.push_back(num);
    num=0;
  }
  return res;
}