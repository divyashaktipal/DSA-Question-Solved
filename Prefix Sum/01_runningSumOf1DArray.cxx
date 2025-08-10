/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/running-sum-of-1d-array/description/

1480. Running Sum of 1d Array

Problem statement:
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
    Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

----------------------------------------------------------------------------------------------------------------------*/
// Date: 05/08/2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Iterative

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.runningSum(nums);

    cout << "Running sum of the array: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}