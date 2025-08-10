// Q. Rotate Image(LC-48)
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Ex:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]


// Approach:
// Calculate the transpose of the matrix.
// swap the columns of transposed matrix using two pointer.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // transpose the matrix
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // swap
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Now you've to swap the columns of each row
        for (int k = 0; k < n; k++)
        { // traversing each row
            // Two-Pointer approach:
            int start = 0;
            int end = n - 1;

            while (start <= end)
            {
                // swap the columns
                swap(matrix[k][start], matrix[k][end]);
                start++;
                end--;
            }
        }
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the no. of row/columns(n*n matrix): ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix row-wise: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];

    sol.rotate(matrix);

    cout << "Rotatated matrix (90 degrees clockwise): " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}