/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/subarray-sum-equals-k/description/

560. Subarray Sum Equals K

Problem statement:
    Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
    A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
    Input: nums = [1,1,1], k = 2
    Output: 2
Example 2:
    Input: nums = [1,2,3], k = 3
    Output: 2

----------------------------------------------------------------------------------------------------------------------*/
// Date: 31/07/2025
// Time Complexity: O(n^3)
// Space Complexity: O(1)
// Approach: Brute Force

#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int target){
    int count = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j <= n; j++){
            count += nums[j];
        }
    }
    if(count == target){
        return 1; // Found a subarray with the target sum
    }
}

int main(){
    vector<int> nums = {1,1,1};
    int target = 2;
    int result = subarraySum(nums, target);

    cout << "Total subarrays with sum equal to " << target << ": " << result << endl;
    return 0;
}