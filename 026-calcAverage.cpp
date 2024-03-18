//<8 kyu>

// Write a function which calculates the average of the numbers in a given list.
// Note: Empty arrays should return 0.

#include <vector>
using namespace std;

double calcAverage(const vector<int>& values){
  float total=0;
  if(values.size()==0){
    return 0;
  }else{
    for(int i=0; i<values.size(); i++){
     total+= values[i];
    }
    return total/values.size();
  }
}