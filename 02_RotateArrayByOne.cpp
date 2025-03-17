/*----------------------------------------------------------------------------------------------------------------------
Source: GeeksforGeeks
Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

Problem statement:
    Given an array arr, rotate the array by one position in clockwise direction.

    Examples:
    Input: arr[] = [1, 2, 3, 4, 5]
    Output: [5, 1, 2, 3, 4]
    Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.

    Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
    Output: [3, 9, 8, 7, 6, 4, 2, 1]
    Explanation: After rotating clock-wise 3 comes in first position.

----------------------------------------------------------------------------------------------------------------------*/
// Date: 17/03/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
      void rotate(vector<int> &arr) {
          // Shifting each element
          
          int n = arr.size();
          
          // store the last element in temp variable.
          int temp = arr[n-1];
          
          // shifting each element with i
          for(int i = n-1; i > 0; i--)
          {
              arr[i] = arr[i-1];
          }
          arr[0] = temp;
      }
  };