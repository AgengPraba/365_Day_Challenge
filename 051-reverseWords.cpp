//<7 kyu>

// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

// Examples
// " This is an example!" ==> " sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"

#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string reverse_words(string str)
{
  istringstream  iss(str);
  
  string word;
  string reversedString;


    char firstChar;
    while (iss.get(firstChar) && isspace(firstChar)) {
        reversedString += firstChar;
    }
    iss.unget();

    while (iss >> word) {
      reverse(word.begin(), word.end());
        reversedString += word;

        if (iss.peek() != EOF) {
            char nextChar = iss.get();
            while (isspace(nextChar)) {
                reversedString += nextChar;
                nextChar = iss.get();
            }
            iss.unget();
        }
    }

    return reversedString;
}