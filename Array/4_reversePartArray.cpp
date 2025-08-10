// Reverse the part of the array from index 'i' to 'j'.
// Ex: Input: 1 2 3 4 5 6 7, i = 0, j = 4
// Output: 5 4 3 2 1 6 7


#include<bits/stdc++.h>
using namespace std;


void display(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
}

void reversePart(int i, int j, vector<int> &arr){
    // Reverse the part of the array
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5); 
    arr.push_back(6);
    arr.push_back(7);

    cout << "Normal array is: "<< endl;
    display(arr);

    cout << "\n Reverse the part of the array from index 0 to 4: " << endl;
    reversePart(0, 4, arr);
    display(arr);

    return 0;
}

