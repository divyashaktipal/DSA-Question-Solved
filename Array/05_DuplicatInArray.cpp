/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: POTD

Duplicate In Array:

Problem statement:
    You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
    There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 28/03/2025
// Time Complexity: O(nlogn)
// Space Complexity: O(n)
// Approach: using map & counting frequency of each element

#include <map>
int findDuplicate(vector<int> &arr) 
{
    map<int,int>mp;

    for(int access: arr)
    {
        mp[access]++;
        if(mp[access] > 1)
            return access;
    }
}