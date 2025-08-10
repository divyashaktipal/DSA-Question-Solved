// Sort the 0's and 1's in the array.


#include<bits/stdc++.h>
using namespace std;

// Approach: Two pass approach
void sort01(vector<int>& arr){
    int n = arr.size();
    int noOfZero = 0;
    int noOfOne = 0;

    for(int i = 0; i < n; i++)
        if(arr[i] == 0) 
            noOfZero++;
        else
            noOfOne++;

    // Filling element
    for(int i = 0; i < n; i++)
        if(i <= noOfZero-1)
            arr[i] = 0;
        else
            arr[i] = 1;
    
}



// Approach: Two pointer approach
// 1. Initialize two pointers, low and high.
// 2. Traverse the array using the low pointer. 
// 3. If the element at low is 0, increment low.
// 4. If the element at low is 1, swap it with the element at high and decrement high.  
// 5. Continue until low is less than or equal to high.
// 6. The array will be sorted with all 0's at the beginning and all 1's at the end.

// void sort01(vector<int>& arr){
//     int low = 0, high = arr.size() - 1;
//     while(low <= high){
//         if(arr[low] == 0)   low++;
//         else if(arr[high] == 1) high--;
//         else{
//             // swap(arr[low], arr[high]);
//             int temp = arr[low];
//             arr[low] = arr[high];
//             arr[high] = temp;
//             low++;
//             high--;
//         }
//     }
// }

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);

    // Display Normal array
    cout << "Normal array is: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    // Display Sorted Array
    sort01(arr);
    cout << endl <<"Sorted array is: ";
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
