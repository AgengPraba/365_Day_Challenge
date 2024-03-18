//<8 Kyu>

// Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

// If no occurrences can be found, a count of 0 should be returned.

// ("Hello", "o")  ==>  1
// ("Hello", "l")  ==>  2
// ("", "z")       ==>  0
// str_count("Hello", 'o'); // returns 1
// str_count("Hello", 'l'); // returns 2
// str_count("", 'z'); // returns 0


#include <string>
#include <iostream>
using namespace std;

unsigned int strCount(const string& word, char letter){
  int sum=0;
  
  for(char i : word){
    if(i==letter){
      sum++;
    }
  }
  return sum;
} 

int main(){
  cout<<strCount("Hello", 'l');
  return 0;
}