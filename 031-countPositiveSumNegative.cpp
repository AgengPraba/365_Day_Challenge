//<8 kyu>

// Given an array of integers.

// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

// If the input is an empty array or is null, return an empty array.

// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

#include <vector>
using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input)
{
  int sumNeg=0;
  int countPos=0;
  vector<int> res{};
  
  if (input.empty()) {
    return res;
  }

  for(size_t i = 0; i < input.size(); i++){
    if(input[i] > 0){
      countPos++;
    } else if(input[i] < 0){
      sumNeg += input[i];
    }
  }
  res.push_back(countPos);
  res.push_back(sumNeg);
  
  return res;
}