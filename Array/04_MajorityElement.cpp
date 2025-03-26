/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: POTD

Majority Element:

Problem statement:
    You are given an array/list 'ARR' of integers of length ‘N’. You are supposed to 
    find all the elements that occur strictly more than floor(N/3) times in the given array/list.
Example:
Sample Input 1 :
    7
    3 2 2 1 5 2 3
    5
    7 4 4 9 7
Sample Output 1:
    2
    4 7

    Explanation of Sample Input 1:
    In the first test case, floor(N/3) = floor(7/3) is equal to 2, and 2 occurs 3 times which is 
    strictly more than N/3. No other element occurs more than 2 times.

    In the second test case, floor(N/3) = floor(5/3) is equal to 1, and 4 and 7 both occur 2 times. 
    No other element occurs more than once.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 26/03/2025
// Time Complexity: O(n)
// Space Complexity: O(n)
// Approach: Using Hashing

#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
    // to store the result and return array
    vector<int> ans;

    // size of array
    int len = arr.size();

    // unordered map to store the frequency of repeating element
    unordered_map<int,int> mp;

    // traversing & storing repeating element in map
    for(int i = 0; i < len; i++)
        mp[arr[i]]++;

    // Iterate through each element of map with checking condition
    // and store them in `ans` vector array
    for(auto &m:mp)
    {
        if(m.second > len/3)
            ans.push_back(m.first);
    }
    return ans;
}



// Optimized Solution (Boyer-Moore Voting Algorithm):
/*  The above solution uses O(N) time and O(N) space, but we can optimize the space to O(1) using 
    the Boyer-Moore Voting Algorithm.

Optimized Approach:
--> At most, there can be only two elements appearing more than floor(N/3).

--> We maintain two candidate elements (num1 and num2) and their respective counts (count1 and count2).

--> In the first pass, find potential candidates.

--> In the second pass, verify if they actually appear more than floor(N/3) times. */

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr) {
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0, n = arr.size();

    // First pass: Find candidates for majority elements
    for (int num : arr) {
        if (num == num1) 
            count1++;
        else if (num == num2) 
            count2++;
        else if (count1 == 0) 
            num1 = num, count1 = 1;
        else if (count2 == 0) 
            num2 = num, count2 = 1;
        else 
            count1--, count2--;
    }

    // Second pass: Verify if candidates appear > floor(N/3) times
    count1 = count2 = 0;
    for (int num : arr) {
        if (num == num1) count1++;
        else if (num == num2) count2++;
    }

    vector<int> ans;
    if (count1 > n / 3) ans.push_back(num1);
    if (count2 > n / 3) ans.push_back(num2);

    return ans;
}


