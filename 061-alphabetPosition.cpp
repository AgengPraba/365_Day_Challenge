// <6 kyu>

// In this kata you are required to, given a string, replace every letter with its position in the alphabet.

// If anything in the text isn't a letter, ignore it and don't return it.

// "a" = 1, "b" = 2, etc.

// Example
// alphabet_position("The sunset sets at twelve o' clock.")
// Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )

#include <string>
#include <cctype>
#include <sstream>

using namespace std;

string alphabet_position(const string &text) {
  stringstream res;
  
  for(int i=0; i<text.size(); i++){
    if(isalpha(text[i])){
      char uppercase_char = toupper(text[i]); 
      res << (uppercase_char - 'A' + 1) << " ";
    }
  }
   string result = res.str();
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}