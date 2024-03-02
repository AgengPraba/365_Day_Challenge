//<6 Kyu>

// Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples:

// "Hey fellow warriors"  --> "Hey wollef sroirraw" 
// "This is a test        --> "This is a test" 
// "This is another test" --> "This is rehtona test"

#include <iostream>
#include <sstream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

string spinWords(const string &str) {
    unordered_map<string, size_t> letterCountPerWord;
    stringstream ss(str);
    string word;
    string res;
    vector<string> order;

    while (ss >> word) {
        size_t letterCount = 0;

        for (char ch : word) {
            if (isalpha(ch)) {
                letterCount++;
            }
        }

        letterCountPerWord[word] = letterCount;
        order.push_back(word);
    }

    for (const auto& word : order) {
        const size_t letterCount = letterCountPerWord[word];

        if (word.length() >= 5) {
            string reverseWord = word;
            reverse(reverseWord.begin(), reverseWord.end());
            res += reverseWord + " "; 
        } else {
            res += word + " ";
        }
    }

    if (!res.empty() && res.back() == ' ') {
        res.pop_back();
    }

    return res;
}
