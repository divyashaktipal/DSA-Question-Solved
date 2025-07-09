// Q. Write a program to print the transpose of the matrix entered by user and store it in another matrix.

#include <iostream>
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

    cout << endl << "The original matrix is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // transpose in the same matrix
    
    for(int i = 0; i <= m-1; i++){ // rows
        for(int j = i+1; j <= n-1; j++){ // cols
            // swaping of i, j and j, i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        } 
    }  
            
    cout << endl << "The transpose of the matrix is: " << endl;

    // print the transpose matrix
    for(int i = 0; i < n; i++){ // Loop through rows of the transpose
        for(int j = 0; j < m; j++) // Loop through columns of the transpose
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}