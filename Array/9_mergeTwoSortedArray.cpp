// Merge two sorted arrays

// Approach:

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArray(vector<int>& arr1, vector<int>& arr2,int m, int n){
    // Create a new array to store the merged result
    vector<int> result(m+n);
    int i = 0; //arr1
    int j = 0; //arr2
    int k = 0; //result

    // Traverse both arrays and store them
    while(i <= m-1 && j <= n-1){
        if(arr1[i] < arr2[j]){
            result[k] = arr1[i];
            i++;
            k++;
        }
        else {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }

    // agar kisi ek array ka pura element khtm ho gya ho 
    // for remaining elements

    if(i == m) { // jab arr1  ke sare elements fill kar chuke ho
        while(j <= n-1){
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    if(j == n){ // jab arr2 ki puri element khtm ho chuka ho
        while(i <= m-1){
            result[k] = arr1[i];
            k++;
            i++;
        }
    }
    return result;
}

int main(){
    vector<int> arr1;
    arr1.push_back(0);
    arr1.push_back(2);
    arr1.push_back(8);
    arr1.push_back(9);
    arr1.push_back(11);
    arr1.push_back(13);

    int m = arr1.size();
    cout << "Original Array: "<< endl << "arr1: ";
    for(int i=0; i<m; i++)
        cout << arr1[i] <<" ";
    cout << endl;

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(11);

    int n = arr2.size();
    cout << "arr2: ";
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    vector<int> v = mergeSortedArray(arr1, arr2,m,n);

    // Print the merged array
    cout << "Merged array: ";
    for(int i = 0; i < m+n; i++){
        cout << v[i] << " ";
    }
}