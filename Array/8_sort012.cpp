// sort 0s, 1s, and 2s in an array

// Approach: uses sort 0 and 1 approach

#include <bits/stdc++.h>
using namespace std;

// Function to sort an array containing 0s, 1s, and 2s
// Approach: Two pass approach

// void sort012(vector<int>& arr){
//     int noOfZero = 0, noOfOne = 0, noOfTwo = 0;
//     // Counting number of 0s, 1s, and 2s in the array
//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] == 0)
//             noOfZero++;
//         else if(arr[i] == 1)
//             noOfOne++;
//         else
//             noOfTwo++;
//     }

//     // Filling element
//     for(int i = 0; i < arr.size(); i++){
//         if(i < noOfZero)
//             arr[i] = 0;
//         else if(i < noOfZero + noOfOne)
//             arr[i] = 1;
//         else
//             arr[i] = 2;
//     }
// }


// Approach: Dutch National Flag Algorithm(Three pointer approach)
void sort012(vector<int>& arr){
    int low = 0, mid = 0, high = arr.size()-1;
    while(mid <= high){
        if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else
            mid++;
    }
}
int main(){
    vector<int> arr = {2, 0, 1, 2, 0, 1, 2, 0, 1};

    cout << "Original array: ";
    for(int i : arr) cout << i << " ";
    cout << endl;

    cout << "Sorted array: ";
    sort012(arr);
    for(int i : arr) cout << i << " ";
    cout << endl;
}
