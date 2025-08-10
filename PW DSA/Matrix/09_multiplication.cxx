// Matrix Multiplication

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout << "Enter rows of 1st matrix: " ;
    cin >> m;

    int n;
    cout << "Enter columns of 1st matrix: ";
    cin >> n;

    int p;
    cout << "Enter rows of 2nd matrix: ";
    cin >> p;

    int q;
    cout << "Enter columns of 2nd matrix: ";
    cin >> q;

    if(n == p){
        // Input for 1st matrix
        int a[m][n];
        cout << "Enter elements of 1st matrix: ";
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        
        // Input for 2nd matrix
        int b[p][q];
        cout << "Enter elements of 1st matrix: ";
        for(int i = 0; i < p; i++)
            for(int j = 0; j < q; j++)
                cin >> b[i][j];


        // resultant matrix
        int res[m][q];
        
    }

    else{ // n != p
        cout << "Matrices cannot be multiplied";
    }
}