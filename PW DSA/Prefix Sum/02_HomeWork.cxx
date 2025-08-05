/*----------------------------------------------------------------------------------------------------------------------
Problem statement:
    Given an array nums. You have given two input X and Y and have to return the sum between them.
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

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> calculateSum(vector<int> &nums, int X, int Y)
    {
        // first we will calculate the running sum of the array

        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        // then we will calculate the sum between the indices X and Y
        if (X > 0)
            nums[Y] -= nums[X - 1]; // subtract the sum before index X

        else
            nums[Y] = nums[Y]; // if X is 0, we don't need to subtract anything

        return nums;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int X = 1, Y = 3;
    vector<int> result = sol.calculateSum(nums, X, Y);

    cout << "Total sum: " << result[Y] << endl;

    return 0;
}