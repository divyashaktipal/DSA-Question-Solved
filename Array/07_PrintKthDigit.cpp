/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: POTD

Print The Kth Digit:

Problem statement:
    You are given three non-negative integers N, M, and K. Your task is to print the Kth digit from the right in ‘N’ 
    raised to the power ‘M’ that is, in N ^ M.

Note:

1) It is guaranteed that the Kth digit from the right always exists.
2) It is also guaranteed that 'K' is always less than or equal to the number of digits in N ^ M.
3) 'N' and 'M 'can’t be a 0 simultaneously.

Example:
Sample Input 1:
1
2 4 1
Sample Output 1:
6
Explanation for sample input 1:
2 ^ 4 = 16, and the 1st digit in 16 from the right is 6.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/04/2025
// Time Complexity: O(M+K)
// Space Complexity: O(d) 

// Approach: 
// Calcualate the power of N^M using pow(N,M) and 
// store it in a variable.
// Convert that variable into String, it's easy to access Kth bit.
// access the Kth digit from the right of the string.

#include <bits/stdc++.h> 
using namespace std;
int findKthFromRight(int n, int m, int k) 
{
	long long num = pow(n,m);
	string str = to_string(num);

	// calculate the Kth digit
	for(int i = 1; i < k; i++)
		num /= 10;  // remove the rightmost digit
	return num % 10; // get the Kth digit from right

	// another way to calculate the Kth digit
	// return str[str.size() - k] - '0';
}



