// Q. Write a program to add two matrices and print the resultant matrix.

#include <iostream>
using namespace std;
int main(){
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {7, 8, 9, 10, 11, 12};

    int sum[2][3];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)  
            sum[i][j] = a[i][j] + b[i][j];
       
    cout << "Sum of the two matrices is: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            cout << sum[i][j] << " ";
        cout << endl;    
    }

    // Another way to add two matrices
    cout << "Another way to add two matrices: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            cout << a[i][j] + b[i][j] << " ";
    }
}
