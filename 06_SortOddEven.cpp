/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: POTD

sort odd even:

Problem statement:
    You are given a 0-indexed array ‘NUMS’ consisting of ‘N’ integers. Sort the array ‘NUMS’ in such a way that the 
    first half of the array contains only odd numbers sorted in non-increasing order and the second half contains only even 
    numbers sorted in non-decreasing order.

Example:
Input: ‘N’ = 4,  ‘NUMS’ = [2, 5, 3, 6] 

Output: [5, 3, 2, 6]

Sorting the odd numbers of the array ‘NUMS’ in non-increasing order, the result is 5, 3
Then, Sorting the even numbers in non-decreasing order, the result is 2, 6.
Since the final array should contain the odd numbers in non-increasing order in the first half and even numbers in non-decreasing order in the other half.
So, the final array is [5, 3, 2, 6].
----------------------------------------------------------------------------------------------------------------------*/
// Date: 05/04/2025
// Time Complexity: O(nlogn) + O(n) = O(nlogn)
// Space Complexity: O(n)
// Approach: 



// Approach:
// create two seperate vector to store even and odd numbers.
// Traverse through each element and check even or odd
// and store them in seperate vector.
// then sort the odd numbers in decreasing order and even numbers in increasing order.
// Finally, Concatenate both array and return it.

#include<bits/stdc++.h>
void sortOddEven(vector<int>& nums){
    int n = nums.size();
    vector<int> even;
    vector<int> odd;

    // range-base loop that iterates over each elements of vector 'nums'
    // and during each iteration, the current element is assigned to the variable 'num'
    for(int num : nums)
    {
        if(num % 2 != 0)
            // to append/store the 'num' to odd vector.
            odd.push_back(num);
        else
            even.push_back(num);
    }
    // sort odd numbers in descending order, 'greater<int>()' is used.
    sort(odd.begin(), odd.end(), greater<int>());
    // normally, sort() function automatically sort the elements in increasing order.
    sort(even.begin(), even.end());
    

    // to concatenate both array
    vector<int> result = odd;
    result.insert(result.end(), even.begin(), even.end());
    // to assign the result to nums vector because it is passed by reference.
    nums=result;

}
