// <7 kyu>

// Complete the function/method so that it returns the url with anything after the anchor (#) removed.

// Examples
// "www.codewars.com#about" --> "www.codewars.com"
// "www.codewars.com?page=1" -->"www.codewars.com?page=1"

#include <string>

using namespace std;

string replaceAll(string str) {
string res;
 for(char e:str){
  if(e=='#'){
    break;
  }else{
    res+=e;
  }
 }
  return res;
}