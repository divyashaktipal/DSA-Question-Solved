/*----------------------------------------------------------------------------------------------------------------------
Source: Leetcode
Link: https://leetcode.com/problems/merge-sorted-array/description/?envType=problem-list-v2&envId=array

Merge Sorted Array:

Problem statement:
    You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
    Merge nums1 and nums2 into a single array sorted in non-decreasing order.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
----------------------------------------------------------------------------------------------------------------------*/
// Date: 16/05/2025
// Time Complexity: O(n)
// Space Complexity: O(d) 

// Approach: 
// traverse the array from m to m+n size of the array.
// replace the m elements with nth element
// lastly, sort the element and return it.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m;i <m + n; i++)
            nums1[i] = nums2[i-m];
        
        sort(nums1.begin(), nums1.end());
    }
};