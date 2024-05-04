// <6 kyu>

// Task
// You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

// Examples
// [7, 1]  =>  [1, 7]
// [5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]

#include <algorithm>
#include <utility>
#include <vector>

using namespace std;


class Kata {
public:
    vector<int> sortArray(vector<int> array) {
        vector<int> oddNumbers;
        
        for (int i = 0; i < array.size(); ++i) {
            if (array[i] % 2 != 0) {
                oddNumbers.push_back(array[i]);
            }
        }
        
        sort(oddNumbers.begin(), oddNumbers.end());
        
        auto oddIt = oddNumbers.begin();
        for (int i = 0; i < array.size(); ++i) {
            if (array[i] % 2 != 0) {
                array[i] = *oddIt;
                ++oddIt;
            }
        }
        
        return array;
    }
};