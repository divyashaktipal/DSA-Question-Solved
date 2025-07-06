/*----------------------------------------------------------------------------------------------------------------------
Source: GeeksForGeeks
Link: https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&category=Strings&sortBy=submissions

Parenthesis Checker

Problem statement: 
    Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
    An input string is valid if:
        1. Open brackets must be closed by the same type of brackets.
        2. Open brackets must be closed in the correct order.

Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
----------------------------------------------------------------------------------------------------------------------*/
// Date: 06/07/2025
// Time Complexity: O(n)
// Space Complexity: O(n)

// Approach:
// 1. Iterate through the string:
//      -->Push each opening bracket ((, {, [) onto a stack. 📥
//
//      -->For each closing bracket ( ), }, ]):
//          -->Check if it matches the top of the stack (i.e., the most recent unmatched opening bracket). 🔍
//          -->If the stack is empty or the bracket doesn’t match, the string is invalid, and we return false. ❌
// 2. Final check:
// After iterating through the entire string, if the stack is empty, it means every opening bracket has a corresponding closing bracket, and the sequence is valid. 🎉

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> st;
        
        // push the opening bracket
        for(int i = 0; i < k.size(); i++){
            if(k[i] == '(' || k[i] == '{' || k[i] == '[')
                st.push(k[i]);
                
            // pop the element, if top of stack equal to closing bracket
            else {
                if(!st.empty() && 
                    ((st.top() == '(' && k[i] == ')') ||
                    (st.top() == '{' && k[i] == '}') ||
                    (st.top() == '[' && k[i] == ']' )))
                        st.pop();
                
                // check the unmatched bracket
                else
                    return false;
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s = "[{()}]";
    
    if (sol.isBalanced(s)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }
    
    return 0;
}