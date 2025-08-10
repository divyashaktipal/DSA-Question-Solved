// Date: 10/08/2025
// Link : https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=1&category=Matrix&sortBy=submissions

// Question:
// You are given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. 
// Your task is to find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1.

// Note:
// The array follows 0-based indexing.
// The number of rows and columns in the array are denoted by n and m respectively.

// Examples:

// Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1], [0,0,0,0]]
// Output: 2
// Explanation: Row 2 contains the most number of 1s (4 1s). Hence, the output is 2.


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // Approach:
        // 1.) create a vector array 'rowMax' that store the total sum of the each rows.
        // 2.) Iterate through each row and do sum.
        // 3.) find max. element from 'rowMax' and return their index.
        
        vector<int> rowMax;
        for(auto &row : arr){
            int count=0;
            for(int val : row)
                if(val == 1)
                    count += val;
            rowMax.push_back(count);
        }
        // find maximum element from the 'rowMax' vector.
        int res = *max_element(rowMax.begin(), rowMax.end());
        if(res == 0)
            return -1;
        
        // store the index whose value is maximum.
        int maxIndex = max_element(rowMax.begin(), rowMax.end()) - rowMax.begin();
        
        return maxIndex;
        
    }
};

int main(){
    Solution sol;
    vector<vector<int>> arr = {{0,1,1,1}, {0,0,1,1}, {1,1,1,1}, {0,0,0,0}};
    vector<vector<int>> arr1 = {{0,0}, {0,0}};
    vector<vector<int>> arr2 = {{0,0}, {0,1}};

    int res = sol.rowWithMax1s(arr);
    int res1 = sol.rowWithMax1s(arr1);
    int res2 = sol.rowWithMax1s(arr2);

    cout << "Example 1: " << res << endl;
    cout << "Example 2: " << res1 << endl;
    cout << "Example 3: " << res2 << endl;

}