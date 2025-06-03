// Write a program to copy the contents of one array into another array in reverse order.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    // Input the size of the array
    cout << "Enter the size of the array:";
    int n;
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array:";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // Create a new array to store the reversed elements
    vector<int> reversedArr(arr.size());

    // Copy the elements in reverse order
    for(int i = n-1; i >= 0; i--){
        reversedArr[n-1-i] = arr[i];
    }

    // Print the reversed array
    cout << "Reversed aray is:";
    for(int i = 0; i < n; i++){
        cout << reversedArr[i] << " ";
    }
}