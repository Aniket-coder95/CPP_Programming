#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s) {
    int start = 0 , end = s.size()-1;
    while(start <= end){
        char x = s[start],y=s[end];
        if(!isalpha(x)){
            start++;
            continue;
        }
        if(!isalpha(y)){
            end--;
            continue;
        }
        if( tolower(s[start]) != tolower(s[end]) ){
            return false;
        }
        ++start;
        --end;
    }

    return true;
}

int main(){
	string str;
	cout << "Enter your space separated string here: ";
	getline(cin, str); 
	
	if(isPalindrome(str)){
		cout << "Given string is Palindrome"<<endl;
	}else{
		cout << "Given string is Not Palindrome" << endl;
	}
	
	// A man, a plan, a canal: Panama => true
	return 0;
}