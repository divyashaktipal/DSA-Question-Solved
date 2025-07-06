/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: POTD   (Binary Gap)

Program to check the validity of a Password

Problem statement:
    You are given a number ‘NUM’, return the maximum distance between any two adjacent 1s in the 
    binary representation of 'NUM'.
Note:
    The two 1s are called adjacent if there isn’t another 1 between them. The distance between 2 bits 
    is the absolute difference between their bit positions.

For example :
    Sample Input 1:
    1
    7
    Sample Output 1:
    1

    Explanation For Sample Input 1:
    In the first test case, the binary representation of 7 is “111”. The max distance between 
    the first and second bit or the second and third bit is 1. Hence the answer is 1.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/06/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

// Approach:
// 1) Convert the decimal number to binary digit.
// 2) Traverse the bits one by one and store the maximum diff. b\n two ones.
// 3) Return the max. diff.

#include <bits/stdc++.h> 
using namespace std;
int binaryGap(int num) {
    vector<int> position;

    // convert decimal to binary and store position
    for(int i = 0; i < num; i++){
        if(num % 2 == 1)
            position.push_back(i);
        num /= 2;
    }

    // Find max. gap b\n adjacents of 1's
    int maxGap = 0;
    for(int i = 1; i < position.size(); i++)
        maxGap = max(maxGap, position[i] - position[i-1]);

    return maxGap;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = binaryGap(num);
    std::cout << "Maximum distance between adjacent 1's in binary representation of " << num << " is: " << result << std::endl;

    return 0;
}