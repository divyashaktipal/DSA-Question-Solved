#include<bits/stdc++.h>
using namespace std;
int main(){
    // Two Sum Problem
    // Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    // You may assume that each input would have exactly one solution, and you may not use the same element twice.
    // You can return the answer in any order.

    int target;
    cout << "Enter the target sum:";
    cin >> target;

    cout << "Enter the size of the array:";
    int n;
    cin >> n;

    // input the array elements
    vector<int> nums;
    cout << "Enter the elements of the array:";
    for(int  i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // To access the indices of the target sum
    cout << "Indices of the target sum are: " <<  endl;
    for(int i = 0; i <= nums.size()-1; i++){
        for(int j = i+1; j <= nums.size()-1; j++){
            if(nums[i] + nums[j] ==  target){
                cout << "(" << i << ", " << j <<")" << endl;
            }
            else
            {
                // If the sum is not equal to the target, continue to the next iteration
                continue;
            }
        }
    }

}