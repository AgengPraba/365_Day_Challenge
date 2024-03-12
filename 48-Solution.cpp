//<7 kyu>

// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

// Examples:

// solution('abc', 'bc')  (returns true)
// solution('abc', 'd')    (returns false)


#include <string>

using namespace std;

bool solution(const string &str, const string &ending) {
    size_t pos = str.rfind(ending); 
    return (pos != string::npos) && (pos + ending.length() == str.length());
}