// Make a program that filters a list of strings and returns a list with only your friends name in it.

// If a name has exactly 4 letters in it, you can be sure that it has to be a friend of yours! Otherwise, you can be sure he's not...

// Input = {"Ryan", "Kieran", "Jason", "Yous"}
// Output = {"Ryan", "Yous"}

// Input = {"Peter", "Stephen", "Joe"}
// Output = {}

#include <string>
#include <vector>

using namespace std;

vector<string> friendOrFoe(const vector<string>& input) {
    vector<string> output;

    for (const string& item : input) {
        if (item.length() == 4) { 
            output.push_back(item);  
        }
    }

    return output;
}
