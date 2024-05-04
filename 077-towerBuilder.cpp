// <6 kyu>

// integer number of floors. A tower block is represented with "*" character.

// For example, a tower with 3 floors looks like this:

// [
//   "  *  ",
//   " *** ", 
//   "*****"
// ]

#include <string>
#include <vector>

using namespace std;

vector<string> towerBuilder(unsigned nFloors) {
   vector<string> tower;
    int maxWidth = nFloors * 2 - 1;

    for (int i = 0; i < nFloors; ++i) {
        int width = 2 * i + 1;
        int spaces = (maxWidth - width) / 2;
        string floor = string(spaces, ' ') + string(width, '*') + string(spaces, ' ');
        tower.push_back(floor);
    }

    return tower;
}