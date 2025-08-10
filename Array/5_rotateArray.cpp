// Rotate the given array 'a' by k steps, wher k is non-negative integer.
// Note: k can be greater than the size of the array.
// Ex: Input: 1 2 3 4 5, k = 2
// Output: 4 5 1 2 3

// Approach:
// 1. Divide the array into two parts: first part from 0 to n-k-1 and second part from n-k to n-1.
// 2. Reverse the first part of the array from 0 to n-k-1 using reverse part function.
// 3. Reverse the second part of the array from n-k to n-1 using reverse part function.
// 4. Reverse the entire array.

#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
void reversePart(int i, int j, vector<int> &arr)
{
    // Reverse the part of the array
    while (i <= j)
    {
        // swap(arr[i], arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    cout << "Normal array is: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    int k = 2;

    // Handle cases where k is greater than the size of the array
    k = k % arr.size();

    // Step 1: Reverse the first part of the array
    reversePart(0, arr.size() - k - 1, arr);

    // Step 2: Reverse the second part of the array
    reversePart(arr.size() - k, arr.size() - 1, arr);

    // Step 3: Reverse the entire array
    reversePart(0, arr.size() - 1, arr);

    cout << "\nRotated array is: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}