/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/problem-of-the-day/easy?date=2025-03-31

Addmission in Ninja Gram
Problem statement:
    Ninja is shifting to a new place named NinjaGram. To take admission to the new school, the teacher
    gives him a sentence and asks him to check whether the sentence is a pangram.
    A word or a sentence is called a pangram if it contains all the English alphabet letters.
    Since Ninja is new to programming, he doesn’t have much experience; he asks you to solve the problem. 
    Can you help Ninja figure out whether the sentence is a pangram?

Example:
Sample Input:
    12
    toosmallword
    35
    TheQuickBrownFoxJumpsOverTheLazyDog
Sample Output 1:
    NO
    YES
Explanation for Sample Input 1:
In the first test case, the given string is “toosmallword” which contains the characters [‘t’,’o’,’s’,’m’,’a’,’l’,’w’,’r’,’d’], 
which doesn’t contain all the 26 alphabetic characters. Hence the answer is “NO”.

In the second test case, the given string is “TheQuickBrownFoxJumpsOverTheLazyDog” which contains the characters: 
[‘t’,’h’,’e’,’q’,’u’,’i’,’c’,’k’,’b’,’r’,’o’,’w’,’n’,’f’,’x’,’j’,’m’,’p,’’s’,’v’,’l,’a’,’z’,’y’,’ d’,’g’], 
which contains all the 26 alphabetic characters. Hence the answer is “YES”.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 31/03/2025

// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach: Using Hashing
// We can use a boolean array of size 26 to keep track of the presence of each character in the string.
// We can iterate through the string and mark the corresponding index in the boolean array as true for each character we encounter.
// If we find all 26 characters, we can return true. Otherwise, we return false.
// The time complexity of this approach is O(n), where n is the length of the string, as we need to iterate through the string once.
// The space complexity is O(1) since we are using a fixed-size boolean array of size 26.

#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    // an empty array to store each char
    bool alpha[26] = {false};
    int count = 0;

    for(char c:str)
    {
        // convert Uppercase character into lowercase
        if(c >= 'A' && c <= 'Z' )
            c = c + ('a' - 'A');
        
        // check character is lowercase
        if(c >= 'a' && c <= 'z')
        {
            // check if character is already present in the array
            // if not present then mark it as true and increase the count of unique characters

            int index = c - 'a';
            if(!alpha[index])
            {
                alpha[index] = true;
                count++;
            }
        }
        if(count == 26)
            return true;
    }
    return false;
}
