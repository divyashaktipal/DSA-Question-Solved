// GFG - https://www.geeksforgeeks.org/problems/find-unique-number/0

// Question:
// Given a unsorted array arr[] of positive integers having all the numbers occurring exactly twice,
// except for one number which will occur only once. Find the number occurring only once.

// Examples :
// Input: arr[] = [1, 2, 1, 5, 5]
// Output: 2
// Explanation: Since 2 occurs once, while other numbers occur twice, 2 is the answer.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findUnique(vector<int> &arr)
    {
        unordered_map<int, int> mp;

        for (int val : arr)
            mp[val]++;
        for (int val : arr)
        {
            if (mp[val] == 1)
                return val;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 1, 5, 5};
    int res = sol.findUnique(arr);

    cout << "Unique Element is: " << res;
}