/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651072/offering/10442100?goalRedirection=true&leftPanelTabValue=PROBLEM

Convert String

Problem statement:
    You are given a string 'STR'. You have to convert the first alphabet of each word in a string to UPPER CASE.

For example:
If the given string 'STR' = ”I am a student of the third year” so you have to transform this string to ”I Am A Student Of The Third Year"
Note:
'STR' will contains only space and alphabets both uppercase and lowercase. The words will be separated by space.

----------------------------------------------------------------------------------------------------------------------*/
// Date: 07/04/2025

// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach:
// 1) Traverse the string and check if the first character is lowercase, if it is then convert it to uppercase.
// 2) Traverse the string and check if the previous character is space and current character is lowercase, if it is then convert it to uppercase.
// 3) Return the modified string.
// 4) The time complexity of this approach is O(n), where n is the length of the string, as we need to iterate through the string once.
// 5) The space complexity is O(1) since we are not using any extra space except for the input string.
// 6) The space complexity is O(n) if we consider the output string as well, but since we are modifying the input string in place, we can consider it as O(1).


#include <bits/stdc++.h> 
string convertString(string str) 
{
	int len = str.size();
	
	// Capitalize the first character, it it is lowercase
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ('a' - 'A');

	for(int i=1; i<=len; i++){
		// if previous character is space and current character is lowercase
		if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
	}
	return str;
}