//<8 Kyu>

// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
// The output should be two capital letters with a dot separating them.

// It should look like this:
// Sam Harris => S.H
// patrick feeney => P.F

#include <string>
using namespace std;

string abbrevName(string name)
{
    string res;

    if (name[0] != ' ') {
        res += toupper(name[0]);
    }

    for (size_t i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {
            res += ".";
            res += toupper(name[i + 1]);
        }
    }

    return res;
}
