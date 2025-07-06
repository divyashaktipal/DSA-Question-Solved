// Move all negative numbers to the beginning and postive to end with constant extra space.
// Example:
// Input: arr = {1, -2, 3, -4, 5, -6}
// Output: arr = {-2, -4, -6, 1, 3, 5}


#include <bits/stdc++.h>
using namespace std;

// Function to move all negative numbers to the beginning and positive numbers to the end
void moveNum(vector<int>& arr){
    int i = 0, j = arr.size()-1;

    while(i < j){
        if(arr[i] < 0 )
            i++;
        else if(arr[j] >= 0)
            j--;
        else{
            // Swap negative and positive numbers
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> arr = {1, -2, 3, -4, 5, -6};

    cout << "Original array: ";
    for(int i : arr) cout << i << " ";
    cout << endl;

    moveNum(arr);

    cout << "Modified array: ";
    for(int i : arr) cout << i << " ";
    cout << endl;

    return 0;
}