// <7 kyu>

// Rules
// You need to round the answer to 2 decimal places and return it as String.

// If the given value is 0 then it should return "0.00".

// You will only be given Natural Numbers as arguments.

// Examples (Input --> Output)
// n
// 1 --> 1 --> "1.00"
// 2 --> 1 + 1/4 --> "1.25"
// 5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

string seriesSum(int n) {
    if (n == 0)
        return "0.00";

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (1.0 + (i - 1) * 3);
    }

    stringstream ss;
    ss << fixed << setprecision(2) << sum;
    return ss.str();
}
