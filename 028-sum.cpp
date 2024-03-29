//<8 kyu>

// Write a function that takes an array of numbers and returns the sum of the numbers. The numbers can be negative or non-integer. If the array does not contain any numbers then you should return 0.

// Examples
// Input: [1, 5.2, 4, 0, -1]
// Output: 9.2

// Input: []
// Output: 0

// Input: [-2.398]
// Output: -2.398

#include <vector>

int sum(std::vector<int> nums) {
  float total=0;
  if(nums.size()==0){
    return 0;
  }else{
    for(int i=0; i<nums.size(); i++){
      total+=nums[i];
    }
    return total;
  }
}