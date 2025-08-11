// Question: GFG (Find Only Repetitive Element from 1 to n-1)

// Find Only Repetitive Element from 1 to n-1
// Difficulty: EasyAccuracy: 59.22%Submissions: 21K+Points: 2
// Given an array arr[] of size n, filled with numbers from 1 to n-1 in random order. The array has only one repetitive element. Your task is to find the repetitive element.

// Note: It is guaranteed that there is a repeating element present in the array.

// Examples:

// Input: arr[] = [1, 3, 2, 3, 4]
// Output: 3
// Explanation: The number 3 is the only repeating element.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &arr)
    {
        // count freq. and return
        unordered_map<int, int> mp;
        for (int val : arr)
            mp[val]++;

        for (int val : arr)
        {
            if (mp[val] >= 2)
                return val;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> arr1 = {1, 3, 2, 3, 4};
    vector<int> arr2 = {1, 5, 1, 2, 3, 4};
    vector<int> arr3 = {1, 1};

    int res1 = sol.findDuplicate(arr1);
    int res2 = sol.findDuplicate(arr2);
    int res3 = sol.findDuplicate(arr3);

    cout << "Repeating element is: " << res1 << endl;
    cout << "Repeating element is: " << res2 << endl;
    cout << "Repeating element is: " << res3;
}