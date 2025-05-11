/*
Split the String Problem Statement
You are given a string str consisting of N lowercase alphabets. Your task is to determine if it is possible to divide the string into 
three non-empty substrings such that one of them is a substring of the other two substrings.

Example:
Input:
str = 'abcabab'
Output:
true
Explanation:
We can split the string into three parts a = 'abc', b = 'ab', and c = 'ab', where b is a substring of both a and c.
*/
#include<iostream>
#include<string>

using namespace std;


string split_String(string& str){
    int n = str.size();
    for(int i=0; i <n-2 ; i++){
        for(int j=i+1;  j<n ;j++){
            string s1 = str.substr(i,i+1);
            string s2 = str.substr(i+1,j-1);
            string s3 = str.substr(i+1);
            if(!s1.empty() && !s2.empty() && !s1.empty()){
                if(s1.find(s2) != string::npos && s3.find(s2) != string::npos){
                    return "Yes";
                }
            }
        }
    }
    return "No";
}

int main(){
    string str = "abcabab";
    cout << "Is split possible : " << split_String(str);
    return 0;
}