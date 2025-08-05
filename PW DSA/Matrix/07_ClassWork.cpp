// Question:
// You are given of an array of size n and two distnict number X and Y. You've to tell the sum between the X and Y.

#include<bits/stdc++.h>
using namespace std;

int totalSum(vector<int>& arr, int n, int X, int Y){
    // to store the prefix sum
    // vector<int> prefixSum(n);

    for(int i = 1; i <= n; i++)
        arr[i] += arr[i-1]; 

    int res=0;
    res = arr[Y] - arr[X];
    
    return res;
}
int main(){
    vector<int> arr = {2, 5, 6, 7, 5, 9};
    cout << "Original Array is: ";
    int n = arr.size();
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    int X,Y;
    cout << "Enter the value of X and Y: ";
    cin >> X >> Y;

    cout << "\nSum between X and Y is: ";
    
    for(int i = 0; i < n; i++){
        cout << totalSum(arr, n, X, Y);
    }
    return 0;
}