//<7 kyu>

// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

// Examples
// highAndLow("1 2 3 4 5");  // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string highAndLow(const string& numbers) {
    stringstream ss(numbers);
    vector<int> nums;

    int num;
    while (ss >> num) {
        nums.push_back(num);
    }

    if (nums.empty()) {
        return "";
    }

    int highest = *max_element(nums.begin(), nums.end());
    int lowest = *min_element(nums.begin(), nums.end());

    return to_string(highest) + " " + to_string(lowest);
}