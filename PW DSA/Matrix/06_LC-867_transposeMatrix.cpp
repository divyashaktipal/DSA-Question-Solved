// Leetcode - 867. Transpose Matrix
// https://leetcode.com/problems/transpose-matrix/

// Problem Statement:
// Given a 2D integer array matrix, return the transpose of matrix.
// The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

// Time Complexity: O(m * n)
// Space Complexity: O(m * n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // result matrix with row & cols, to store the transpose of matrix
        // vector<vector<int>> res(cols, vector<int>(rows));

        // for(int i = 0; i < rows; i++)
        //     for(int j = 0; j < cols; j++)
        //         res[j][i] = matrix[i][j];

        // return res;

        // Another way:
        vector<vector<int>> res;

        for (int j = 0; j < cols; j++)
        {
            vector<int> newRow;
            for (int i = 0; i < rows; i++)
            {
                newRow.push_back(matrix[i][j]);
            }
            res.push_back(newRow);
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result = sol.transpose(matrix);
    cout << "Transpose of the matrix is: " << endl;
    for (const auto &row : result)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}