/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/running-sum-of-1d-array/description/

1480. Running Sum of 1D Array

Problem statement:
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). Return the running sum of nums.

    Example 1:
    Input: nums = [1,2,3,4]
    Output: [1,3,6,10]
    
    Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/07/2025

// Approach 1:
// 1) intialize a empty array with size of N.
// 2) store the first element of array into new array.
// 3) Traverse the array from index 1 to N.
// 4) Add the current element with the previous(n-1) element.
// 5) return the new array.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Two Way to solve this question:
        // 1.) By creating a new array and
        // 2.) By modifying the given array

        // First Method: Time: O(n), Space: O(n)

        int n = nums.size();
        // create a new array, size of n
        vector<int> res(n);
        res[0] = nums[0];

        for(int i = 1; i < n; i++)
            res[i] = nums[i] + res[i-1];
        
        return res;


        // Second Method: Time: O(n), Space: O(1)
        for(int i = 1; i < nums.size(); i++)
            nums[i] += nums[i-1];
        return nums;

    }
};


