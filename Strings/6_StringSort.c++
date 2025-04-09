/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/problems/string-sort_18726772?challengeSlug=6-month-code-marathon-1&interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

String Sort

Problem statement:
    You are given a string ‘S’ consisting of lowercase English alphabets from ‘a’ to ‘z’. You have to print the string in sorted order.

Example:

Sample Input 1 :
    2
    kbfhh
    jjkiia

Sample Output 1 :
    bfhhk
    aiijjk   
----------------------------------------------------------------------------------------------------------------------*/
// Date: 09/04/2025

#include <bits/stdc++.h> 
string stringSort(string s){

    // Method 1: Using STL sort function
    // Time: O(nlogn)
    // sort(s.begin(),s.end());
    // return s;

    // or

    // Method 2: Using Bubble sort
    // Time: O(n^2)

    // int n = s.size();
    // for(int i = 0;i < n-1; i++) // for passes
    // {
    //     for(int j = 0; j < n-i-1; j++) // for comparison
    //     {
    //         if(s[j] > s[j+1]) // compare adjacent character
    //             swap(s[j], s[j+1]);
    //     }
    // }
    // return s;


    // or 

    // Method 3: Using Map
    // Time: O(n+k)

    // map to store frequency of each character
    // map<char,int> mp;

    // assign each character with their frequencies
    // for ex: {'k':1, 'b':1, 'f':1, 'h':1, 'h':1} 
    // for(char c:s)
    //     mp[c]++;

    // string result = "";

    // Iterate over the map(keys are sorted) and build the sorted string
    // for(auto pair : mp)
    //     result += string(pair.second, pair.first); // append charcter 'pair.first' pair.second' times

    // return result;




    // Method 4: Using Counting sort
    // Time: O(n)

    // Frequency array for characters 'a' to 'z'
    vector<int> freq(26, 0); 

    // Count the frequency of each character
    for (char c : s) {
        freq[c - 'a']++;
    }

    string sortedString = "";
    // Build the sorted string based on frequencies
    for (int i = 0; i < 26; i++) {
        sortedString += string(freq[i], 'a' + i);
    }

    return sortedString;
}
