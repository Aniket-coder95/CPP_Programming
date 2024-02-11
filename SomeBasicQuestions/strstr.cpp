#include <iostream>
#include <cstring>
using namespace std;

int main(){
	const char* str = "abcgdhfjbgsjfgdkfbhf";
	const char* pattern = "fjbg";
	const char* found =strstr(str, pattern);
	cout<<(found-str)+1; 
	return 0;
}