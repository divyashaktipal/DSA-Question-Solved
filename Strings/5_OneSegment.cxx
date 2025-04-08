/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/problem-of-the-day/easy?date=2025-04-07&leftPanelTabValue=PROBLEM

One segment

Problem statement:
    You are given a binary string ‘STR’, containing only zeroes and ones. This string does not contain any leading zero.
    Your task is to determine if this string contains at most one contiguous segment of ones.

For example:
    Sample Input:
    1
    11100
    Sample Output:
    Yes
Explanation:
In this test case, we can observe that the string contains only one contiguous segment of ones. 
This segment starts at the 0th index and ends at the 2nd index. 

----------------------------------------------------------------------------------------------------------------------*/
// Date: 08/04/2025

// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach:
// Define a variable, say ‘len’, to be equal to the length of the string.
// Now run a loop from 'i' = 0 to ‘i’ < len-1, and do:
// If STR[i] == 0 and STR[i+1] == 1, return False.
// If no zero is followed by a one, return True.

/*
    Time Complexity: O(N)
    Space Complexity: O(1),

    where N is the length of the string.
*/

bool oneSegment(string str) {
	
	int len = str.size();

	for(int i=0;i<len-1;i++) {
		// If there exists a '0' which is followed by a '1', return false
		if(str[i]=='0' && str[i+1]=='1') {
			return false;
		}
	}
	// If no such zero exists, return true because then the string
	// contains only one segment of ones.
	return true;
}