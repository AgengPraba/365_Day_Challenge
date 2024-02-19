//<8 kyu>

// Make a function that will return a greeting statement that uses an input; your program should return, "Hello, <name> how are you doing today?".

#include <string>
using namespace std;

string greet(const string& n){
  return "Hello, "+n+" how are you doing today?";
}