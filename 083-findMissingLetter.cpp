// <6 kyu>

// Find the missing letter
// Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

// You will always get an valid array. And it will be always exactly one letter be missing. The length of the array will always be at least 2.
// The array will always contain letters in only one case.

// Example:

// ['a','b','c','d','f'] -> 'e'
// ['O','Q','R','S'] -> 'P'

#include <vector>

using namespace std;

char findMissingLetter(const vector<char>& letters) {
    for (size_t i = 1; i < letters.size(); ++i) {
        if (letters[i] != letters[i - 1] + 1) {
            return letters[i - 1] + 1;
        }
    }
    return '\0';
}
