//<6 kyu>

// Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

// Example
// createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"

#include <string>

using namespace std;

string createPhoneNumber(const int arr [10]){
  string zone;
  string first;
  string last;
  
  for(int i=0; i<10; i++){
    if(i<3){
      zone+=to_string(arr[i]);
    }else if(i<6){
      first+=to_string(arr[i]);
    }else{
      last+=to_string(arr[i]);
    }
  }
  return "("+zone+")"+" "+first+"-"+last;
}