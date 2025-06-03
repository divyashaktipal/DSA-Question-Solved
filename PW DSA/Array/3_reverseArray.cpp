// Reverse the array using the two-pointer technique.

#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    cout << "Normal array is: "<< endl;
    display(arr);

    // Reverse
    // int start = 0;
    // int end  = arr.size() - 1;
    // while (start < end){
    //     // swap the elements at start and end
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // cout << "\nReversed array is: "<< endl;
    // display(arr);


    // using for loop
    for(int i = 0, j = arr.size() - 1; i <= j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "\nReversed array is: "<< endl;
    display(arr);


    return 0;
}