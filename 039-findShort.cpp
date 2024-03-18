//<7 kyu>

// Simple, given a string of words, return the length of the shortest word(s).
// String will never be empty and you do not need to account for different data types.

#include <sstream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int find_short(const string& str) {
    istringstream iss(str);
    string word;
    int minWordLength = numeric_limits<int>::max(); 

    while (iss >> word) {
        int currentWordLength = word.length();
        minWordLength = min(minWordLength, currentWordLength);
    }

    return minWordLength;
}