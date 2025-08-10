// Date: 10/08/2025
// Link : https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?page=1&category=Matrix&sortBy=submissions

// Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, 
// the task is to find whether element x is present in the matrix.

// Examples:

// Input: mat[][] = [[3, 30, 38],[20, 52, 54],[35, 60, 69]], x = 62
// Output: false
// Explanation: 62 is not present in the matrix, so output is false.

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // traverse the matrix and match the target element with each value
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(x == mat[i][j]){
                    return true;
                    break;
                }
            }
        }
        
        return false;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> arr1 = {{3, 30, 38},{20, 52, 54},{35, 60, 69}};
    int x1 = 62;

    vector<vector<int>> arr2 = {{18, 21, 27}, {38, 55, 67}};
    int x2 = 55;

    vector<vector<int>> arr3 = {{1,2,3}, {4,5,6}, {7,8,9}};
    int x3 = 3;

    int res1 = sol.matSearch(arr1, x1);
    int res2 = sol.matSearch(arr2, x2);
    int res3 = sol.matSearch(arr3, x3);

    cout << "Example 1: " << res1 << endl;
    cout << "Example 2: " << res2 << endl;
    cout << "Example 3: " << res3 << endl;

}