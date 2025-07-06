/*----------------------------------------------------------------------------------------------------------------------
Source: LeetCode 
Link: https://leetcode.com/problems/remove-element/

27. Remove Element

Problem statement:
    Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

    Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
    Return k.

    For example :
    Input: nums = [3,2,2,3], val = 3
    Output: 2, nums = [2,2,_,_]

    Explanation: Your function should return k = 2, with the first two elements of nums being 2.
    It does not matter what you leave beyond the returned k (hence they are underscores).

----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/07/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach:
// 1) Initialize a pointer to track the position of the next non-val element.
// 2) Traverse the array, and whenever a non-val element is found, move it
//    to the position indicated by the pointer and increment the pointer.
// 3) Return the pointer as the new length of the array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int i = 0;

    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
    }
};

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution s;
    int k = s.removeElement(nums, val);
    cout << "k = " << k << endl;
    cout << "nums = ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;

}