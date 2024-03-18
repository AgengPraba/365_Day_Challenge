//<7 kyu>

// An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

// Example: (Input --> Output)

// "Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

// isIsogram "Dermatoglyphics" = true
// isIsogram "moose" = false
// isIsogram "aba" = false

#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

bool is_isogram(const string& str) {
  vector<char> seen_chars;

  for (char ch : str) {
    char lower_ch = tolower(ch);
    if (find(seen_chars.begin(),seen_chars.end(),lower_ch)!= seen_chars.end()) {
      return false;  
    }
    seen_chars.push_back(lower_ch);
  }
  return true; 
}
