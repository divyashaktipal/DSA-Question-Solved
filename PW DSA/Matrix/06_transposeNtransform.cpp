// Question:
// You are given of a matrix/2D array of size N*N. Change this matrix into its transpose.
// Note: You've not to use another martix to store and do not even print them, Only you need to modify them.
// Note: It is only applicable on square matrix.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cout << "Enter the number of rows/columns: ";
    cin >> m;

    int arr[m][m];
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << endl << "The original matrix is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // transpose in the same matrix
    
    for(int i = 0; i <= m-1; i++){ // rows
        for(int j = i+1; j <= m-1; j++){ // cols
            // swaping of i, j and j, i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << endl << "The transpose of the matrix is: " << endl;

    // print the transpose matrix
    for(int i = 0; i < m; i++){ // Loop through rows of the transpose
        for(int j = 0; j < m; j++) // Loop through columns of the transpose
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}