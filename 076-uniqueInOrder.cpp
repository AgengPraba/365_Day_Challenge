// <6 kyu>

// Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

// For example:

// uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
// uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
// uniqueInOrder([1,2,2,3,3])       == {1,2,3}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
vector<T> uniqueInOrder(const vector<T>& iterable) {
    vector<T> result;
    for (const auto& item : iterable) {
        if (result.empty() || item != result.back()) {
            result.push_back(item);
        }
    }
    return result;
}

vector<char> uniqueInOrder(const string& iterable) {
    vector<char> result;
    for (char c : iterable) {
        if (result.empty() || c != result.back()) {
            result.push_back(c);
        }
    }
    return result;
}
