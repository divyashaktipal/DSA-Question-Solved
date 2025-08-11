/*----------------------------------------------------------------------------------------------------------------------
Source: Code360
Link: https://www.naukri.com/code360/problems/leaders-in-an-array_873144?interviewProblemRedirection=true&search=leader&leftPanelTabValue=PROBLEM

Problem statement:
    Given a sequence of numbers. Find all leaders in sequence. An element is a leader if it is strictly greater than all the elements on its right side.
Note:
    1. Rightmost element is always a leader.
    2. The order of elements in the return sequence must be the same as the given sequence.
Example:
The given sequence is 13, 14, 3, 8, 2 .

-> 13 Not a leader because on the right side 14 is greater than 13.
-> 14 lt is a leader because no one greater element in the right side.
-> 3 Not a leader because on the right side 8 are greater than 3.
-> 8 It is a leader because no one greater element on the right side.
-> 2 It is a leader because it is the rightmost element in a sequence.
Hence there are 3 leaders in the above sequence which are 14, 8, 2

----------------------------------------------------------------------------------------------------------------------*/
// Date: 25/03/2025
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Brurte force approach:

#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    
    int i,j;
    vector<int>ans;
    for(i = 0; i < n; i++)
    {
        bool flag = 0;
        for(j = i+1; j < n; j++)
        {
            if(elements[i] <= elements[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            // The condition ans.empty() || ans.back() != elements[i] ensures no duplicates are inserted.
            if(ans.empty() || ans.back() != elements[i])
            ans.push_back(elements[i]);
        }
    }
    return ans;
}

/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 'N' is number of elements in given Sequence.
*/

vector<int> findLeaders(vector<int> elements, int n) {
    int curr_ldr = elements[n - 1];
    
    vector<int> answer;
    // Rightmost element is always a leader.
    answer.push_back(curr_ldr);
    
    // Traverse the array from right to left.
    for (int i = n - 2; i >= 0; i--) {
        // If current element is greater than curr_ldr.
        if (curr_ldr < elements[i]) 
        {
            curr_ldr = elements[i];
            answer.push_back(curr_ldr);
        }
    }
    // To get original order.
    reverse(answer.begin(), answer.end());
    return answer;
}


/*-- Cross-Questions related to the above code --

Q. Why are we using a nested loop in this implementation? Can we optimize it further?
--> The nested loop is used to compare each element with all elements to its right to 
    determine if it is a leader.
    Yes, we can optimize it by traversing the array from right to left while keeping 
    track of the maximum element found so far. This reduces the time complexity to 𝑂(𝑛).

Q. What happens when all elements in the array are the same? Does it still work as expected?
--> Yes, it works correctly. The function will consider only the last occurrence of the element 
    as a leader since no element exists to its right that is greater.

Q. How does the function handle negative numbers?
--> The function correctly identifies leaders even if all numbers are negative. The logic of comparing
    elements remains the same regardless of sign.

Q. Why is bool flag initialized as 0 instead of false? Does it affect the output?
--> bool flag = 0; works the same as bool flag = false; in C++ because 0 is equivalent to false.
    It does not affect the correctness of the code.

Q. Why do we need to check ans.empty() || ans.back() != elements[i] before inserting an element into ans?
--> This check ensures that we do not insert duplicate values into ans. If an element is 
    already the last inserted leader, it is not added again.

Q. What is the worst-case time complexity of this approach?
--> The worst-case time complexity is 𝑂(𝑛^2), when the array is sorted in increasing order, 
    requiring every element to be compared with all subsequent elements.

Q. Can we use a stack to optimize the solution? If so, how?
--> Yes, we can traverse the array from right to left while maintaining a stack to store leaders. 
    Each element is compared with the stack's top, and only larger elements are pushed. This reduces time complexity to O(n).

Q. How does the function behave if the input vector is empty?
--> If the vector is empty (n == 0), the function simply returns an empty ans vector without performing any iterations.

Q. Why do we pass elements by reference (vector<int> &elements) instead of by value?
--> Passing by reference avoids unnecessary copying of the vector, making the function more efficient in terms of memory and performance.

Q. Will this function still work correctly if elements is not sorted in any specific order?
--> Yes, the function works for any order of elements since it does not assume any prior sorting. 
    It checks each element against the ones on its right dynamically.*/