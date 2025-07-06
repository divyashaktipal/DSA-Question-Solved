/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/move-zeroes/description/

283. Move Zeroes

Problem statement:
    Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
    Note that you must do this in-place without making a copy of the array.
For example :
    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]

----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/07/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach:
// 1) intialize a pointer to track the position of the next non-zero element.
// 2) Traverse the array, and whenever a non-zero element is found, move it
//    to the position indicated by the pointer and increment the pointer.
// 3) After the loop, fill the remaining positions with zeroes.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Approach: Two Pointer
        int i = 0;

        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                nums[i] = nums[j];
                i++;
            }
        }

        // For remaining positions with zeroes
        for(int j = i; j < nums.size(); j++)
            nums[j] = 0;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    
    cout << "Output: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}