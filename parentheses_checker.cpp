
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s){
	stack<char> st;
	for (char c:s)
	{
		if(c == '(' || c == '{' || c == '['){
			st.push(c);
		}
		else if(c == ')' || c == '}' || c == ']'){
			if(st.empty()){
				return false;
			}

			char top = st.top();
			st.pop();

			if(top == '(' && c!=')' ||
				top == '{' && c!='}' ||
				top == '[' && c!=']'){
				return false;
			}
		}
	}
	return st.empty();
}

int main(){
	string str = "()(()){}{}{{{}}}[][][[[]]][]";
	string str1 = "((()){{{}{}{}{{{][[][]";
	if(isValid(str1)){
		cout << "Balanced" << endl;
	}else{
		cout << "Not balanced" << endl;
	}
	return 0;
}