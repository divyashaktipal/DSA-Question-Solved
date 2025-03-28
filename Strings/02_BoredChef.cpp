/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/problems/bored-chef_11391556?topic=null&count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&page=1

Problem statement:
    You are given a string ‘S’ of size ‘N’ where each character is numbered from ‘0’ to ‘N - 1’. 
    You are allowed to swap any two adjacent characters any number of times.

You are also given an integer ‘K’. Your task is to check whether it is possible to group any same ‘K’ characters by using the given operation.
Your task is to tell whether it is possible to group any same ‘K’ characters and return ‘1’ if it is possible, otherwise return ‘0’.

Example:
‘N’ = 5
‘K’ = 2
‘S’ = “acdab”

In the first operation, you can swap ‘0th’ and the ‘1st’ character. You’ll get the string ‘S’ as: “cadab”
In the second operation, you can swap ‘1st’ and the ‘2nd’ character. You’ll get the string ‘S’ as: “cdaab”.
Here, we are getting a group of two ‘a’s together. Hence, the answer for this test case is ‘1’.

----------------------------------------------------------------------------------------------------------------------*/
// Date: 28/03/2025

// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach: Using Hashing
// We can use a hash map to count the frequency of each character in the string.
// If any character appears at least K times, we can group them together by swapping adjacent characters.
// If no character appears at least K times, we cannot group them together.

// The time complexity of this approach is O(n), where n is the length of the string, as we need to iterate through the string once to count the frequencies.
// The space complexity is O(1) since we are using a fixed-size hash map (for 26 lowercase letters).

int boredChef(int n, int k, string &s) {
   
    unordered_map<char,int> mp;
 
    for(char c : s)
       mp[c]++;
    
    for(auto &m:mp)
       if(m.second>=k)
          return 1;
    return 0;
 }