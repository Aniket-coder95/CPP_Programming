#include <iostream>
#include <string>

int main(){
	std::string str = "hello ji hello";
	int len = str.length();
	for(int i = 0 ; i<len/2 ; i++){
		char x = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = x;
	}
	std::cout << len <<"\n" << str << std::endl;
	int x = str.find("ij"); //string got reversed
	std::cout<< x;
	
	return 0;
}