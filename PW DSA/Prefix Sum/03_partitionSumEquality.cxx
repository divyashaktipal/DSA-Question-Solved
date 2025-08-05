/*----------------------------------------------------------------------------------------------------------------------
Problem statement:
    Check if an array can be partitioned into two contiguous arrays of equal sum.
Example 1:

Input: nums = [1,2,3,4], X = 1, Y = 3
Output: 9
Explanation: total sum is from index 1 to index 3 is: 2+3+4 = 9.

----------------------------------------------------------------------------------------------------------------------*/
// Date: 05/08/2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: 
// 1.) we will calculate the prefix sum of array.
// 2.) to calculate the sum between X and Y:
//      prefixSum(Y) - prefixSum(X-1)