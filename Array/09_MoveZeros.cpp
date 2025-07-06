// Leetcode: 283 (Move Zeroes)

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example:

    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]
*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
  int nonZeroIndex = 0;

  // Iterate through the array
  for (int i = 0; i < nums.size(); ++i) {
    // If the current element is non-zero
    if (nums[i] != 0) {
      // Move the non-zero element to the 'nonZeroIndex' position
      nums[nonZeroIndex] = nums[i];
      nonZeroIndex++;
    }
  }

  // Fill the remaining positions with zeros
  for (int i = nonZeroIndex; i < nums.size(); ++i) {
    nums[i] = 0;
  }
}

int main() {
  vector<int> nums1 = {0, 1, 0, 3, 12};
  moveZeroes(nums1);
  cout << "Output: ";
  
  for (int num : nums1) 
    cout << num << " ";

  return 0;
}