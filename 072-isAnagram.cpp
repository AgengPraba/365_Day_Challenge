// <7 kyu>

// An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

// Note: anagrams are case insensitive

// Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

// Examples
// "foefet" is an anagram of "toffee"

// "Buckethead" is an anagram of "DeathCubeK"

#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string test, string original){
   string str1Lower = test;
    string str2Lower = original;
    transform(str1Lower.begin(), str1Lower.end(), str1Lower.begin(), ::tolower);
    transform(str2Lower.begin(), str2Lower.end(), str2Lower.begin(), ::tolower);
    
    // Remove whitespace from both strings
    str1Lower.erase(remove_if(str1Lower.begin(), str1Lower.end(), ::isspace), str1Lower.end());
    str2Lower.erase(remove_if(str2Lower.begin(), str2Lower.end(), ::isspace), str2Lower.end());
    
    // Sort the characters in both strings
    sort(str1Lower.begin(), str1Lower.end());
    sort(str2Lower.begin(), str2Lower.end());
    
    // Check if the sorted strings are equal
    return str1Lower == str2Lower;
}