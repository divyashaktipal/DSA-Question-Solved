// Q. Write a program to store roll numbers and marks obtained by 4 students in a class. Display the roll number and marks of the student with the highest marks.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][4];

    cout << "Enter roll numbers and marks of 4 students:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Roll Number\tMarks" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "\t\t";
        }
        cout << endl;
    }
}