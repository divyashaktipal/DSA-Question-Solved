// Q. Write a cpp program to find the largest element of a given 2D array of integers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the number of row and column:";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter the elements of the matrix: " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // Find the largest element in the 2D array
    int largest = arr[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > largest)
                largest = arr[i][j];
        }
    }
    cout << "The largest element in the 2D array is: " << largest << endl;

    // anohter way to find the largest element
    int largest2 = INT_MIN;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > largest2)
                largest2 = arr[i][j];
        }
    }
    cout << "The largest element in the 2D array is: " << largest2 << endl;
}