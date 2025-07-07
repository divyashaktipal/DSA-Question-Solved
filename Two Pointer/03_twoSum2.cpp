/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

167. Two Sum ii - Input Array Is Sorted

Problem statement:
    Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up 
    to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
    Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
    The tests are generated such that there is exactly one solution. You may not use the same element twice.
    
    Note: Your solution must use only constant extra space.

    Example 1:

    Input: numbers = [2,7,11,15], target = 9
    Output: [1,2]
    Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

----------------------------------------------------------------------------------------------------------------------*/
// Date: 07/07/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach:
// 1) Initialize two pointer: start and end.
// 2) start points to first index and end points to last index.
// 3) Iterate through the loop, now we've to check the sum of start and end is equal to target or not.
// 4) Note: There will be a condition, we've to check how many steps should take?
// 5) It's simple if Current total is smaller than the target, that's why we should move left pointer to the next, 
//    because input array is sorted, so right number is definitely greater than left number. If we move left pointer to the next, we will get bigger total next time.
// 6) We got bigger total this time. In that case, we need to move right pointer to the next, because of the same reason above. Input array is sorted, 
//    so if we move right pointer to the next, we will get smaller total next time.
// 7) when current sum is equal to target, return their index+1, because answer required 1-based indexing and array having 0-based indexing.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Approach: Two Pointer3
        int start = 0;
        int end = numbers.size()-1;

        while(start < end){
            if(numbers[start] + numbers[end] < target)
                start++;
            else if(numbers[start] + numbers[end] > target)
                end--;
            else
                // reason to add +1 is bcz array is 0 based indexing, but you've to return 1 based indexing
                return {start+1, end+1};
        }
        return {};
    }
};

int main(){
    Solution s;
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> result = s.twoSum(numbers, target);
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}