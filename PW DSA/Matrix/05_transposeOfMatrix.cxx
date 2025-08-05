// Q. Write a program to print the transpose of the matrix entered by user without storing into another matrix and with stroing into another matrix.

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << endl
         << "The original matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {                               // rows
        for (int j = 0; j < n; j++) // columns
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // Calculate and print the transpose of the matrix without storing it into another matrix
    cout << endl
         << "The transpose of the matrix (without storing it into another matrix): " << endl;
    for (int i = 0; i < n; i++)
    {                               // columns
        for (int j = 0; j < m; j++) // rows
            cout << arr[j][i] << " ";
        cout << endl;
    }

    // Calculate the transpose of the matrix with storing it into another matrix
    int transpose[n][m]; // Transpose will have dimensions n x m
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = arr[i][j];

    cout << endl
         << "The transpose of the matrix (with storing it into another matrix): " << endl;

    // print the transpose matrix
    for (int i = 0; i < n; i++)
    {                               // Loop through rows of the transpose
        for (int j = 0; j < m; j++) // Loop through columns of the transpose
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}