// Problem statement
// You are given a string 'STR' representing JSON object. Return an array of strings denoting JSON objects with proper indentation.

// Rules for proper indentation:
// 1. Every inner brace should increase one indentation to the following lines.
// 2. Every close brace should decrease one indentation to the same line and the following lines.
// 3. Every ‘,’ will mean a separate line.
// 4. The indents can be increased with an additional 4 spaces or ‘/t’.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = {"{A:"B",C:{D:"E",F:{G:"H",I:"J"}}}"};

    vector<string> result;
    
    for(char chr: str){
    if(chr[i] == '{' || chr[i] == '[')
        
    }
}