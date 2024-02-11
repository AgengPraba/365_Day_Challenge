//<8 Kyu>

// Given an array of integers your solution should find the smallest integer.

// For example:

// Given [34, 15, 88, 2] your solution will return 2
// Given [34, -345, -1, 100] your solution will return -345
// You can assume, for the purpose of this kata, that the supplied array will not be empty.


#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int res=list[0];
  
  for(int e : list){
    if(e<=res){
      res=e;
    }
  }
  return res ;
}