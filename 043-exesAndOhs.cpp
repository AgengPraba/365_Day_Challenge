//<7 kyu>

// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

// Examples input/output:

// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true  (when no 'x' and 'o' is present should return true)
// XO("zzoo") => false

#include <cctype>
#include <string>
using namespace std;

bool XO(const string& str)
{
  string word=str;
  int o=0;
  int x=0;
  
  for(auto &c:word){
  c=tolower(c);
  }
  
  for(auto c:word){
    if(c=='o'){
      o++;
    }else if(c=='x'){
      x++;
    }
  }
  
  return (x==o) ? 1:0;
}