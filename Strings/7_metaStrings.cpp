/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: potd
Meta Strings

Problem statement:
    You are given two strings 'STR1' and 'STR2'. You need to tell whether the strings are meta strings or not.
    Meta strings are strings that can be made equal by swapping exactly one pair of distinct characters in one of the strings.
    Note: Equal strings are not considered as meta strings. 
Example:

Sample Input 1:
    2
    Coding
    Codnig
    Ninjas
    Niaxns
Sample Output 1:
    YES
    NO
----------------------------------------------------------------------------------------------------------------------*/
// Date: 03/06/2025

// Time: O(n)
// Space: O(1)

// Approach:
// 1. Check Lengths: if `str1` and `str2` have diff. lengths, they cannot be meta strings.
// 2. Find mismatched positions: iterate through both strings and record indices where character differ and 
// if there are exactly two mismatches, store the indices.
// 3. Swap and Compare: Swap the mismatches indices characters in `str1` and check if it matches `str2`.
// If yes, return true(they are meta strings) otherwise false.


#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2){
    int m = str1.size();
    int n = str2.size();

    if(m != n)
        return false;

    // To store the mismatches indices(position)
    vector<int> mismatchIndices;

    // find mismatch position
    for(int i = 0; i < m; i++){
        if(str1[i] != str2[i])
            mismatchIndices.push_back(i);
    }

    // meta string should have `exactly` two mismatches.
    if(mismatchIndices.size() != 2)
        return false;

    // swap two mismatched characters
    swap(str1[mismatchIndices[0]], str1[mismatchIndices[1]]);

    return str1 == str2;

}
