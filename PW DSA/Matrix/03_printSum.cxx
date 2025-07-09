// Q. Write a cpp program to print sum of all elements of a matrix.

#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
        

    // Calculate the sum of all elements in the matrix
    int sum = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            sum += arr[i][j];

    cout << "The sum of all elements in the matrix is: " << sum << endl;
}