// <7 kyu>

// Input: [0]
// Output: "even"

// Input: [0, 1, 4]
// Output: "odd"

// Input: [0, -1, -5]
// Output: "even"

#include <string>
#include <vector>

using namespace std;

string odd_or_even(const vector<int> &arr)
{
  int sum=0;
  
  for(int e:arr){
    sum+=e;
  }
  
  return (sum%2==0)?"even":"odd";
}