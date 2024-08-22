// <6 kyu>

// Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.

// Examples
// "the-stealth-warrior" gets converted to "theStealthWarrior"

// "The_Stealth_Warrior" gets converted to "TheStealthWarrior"

// "The_Stealth-Warrior" gets converted to "TheStealthWarrior"

#include <string>
#include <cctype>

using namespace std;

string to_camel_case(string text) {
  string convert;
  if(text.empty()){
    return "";
  }
  
  
  for(int i=0; i<text.size(); i++){
    if(text[i]=='-' || text[i]=='_'){
      convert+=toupper(text[i+1]);
      i++;
    }else{
      convert+=text[i];
    }
  }
  return convert;
}