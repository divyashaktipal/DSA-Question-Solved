// Q. Leetcode-1886. Determine Whether Matrix Can Be Obtained By Rotation

// Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.
// Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
// Output: true
// Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.

// Note: The maximum rotation of the matrix would be 4 times(0 deg, 90 deg, 180 deg, 270 deg)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // Time Complexity: O(n^2)  
        // Space Complexity: O(1)
        int n = mat.size();
        
        // The maximum rotation of the matrix would be 4 times(0 deg, 90 deg, 180 deg, 270 deg)
        for(int r = 0; r < 4; r++){
            bool flag = true;
            // checking if mat matches target
            for(int i = 0; i < n && flag; i++){
                for(int j = 0; j < n; j++){
                    if(mat[i][j] != target[i][j]){
                        flag = false;
                        break;
                    }
                }
            }
        
        if(flag)
            return true;
        
        // transpose the matrix mat
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                // swap(mat[i][j],  mat[j][i]);
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        // rotate the matrix by reversing each row
        for(int k = 0; k < n; k++){ 
            // reverse(mat[k].begin(), mat[k].end());
            int start = 0;
            int end = n-1;

            while(start <= end){
                swap(mat[k][start], mat[k][end]);
                start++;
                end--;
            }
        }
        }
        return false;
    }
};

int main(){
    
    
    return 0;

}