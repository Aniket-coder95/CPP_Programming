#include <unordered_set>
#include <iostream>
#include<string>

void longest_substring(std::string s){
	std::unordered_set<char> s_set;
	std::string res;
	std::string result;
	for(int i=0 ; i<s.length(); i++){
		if(s_set.find(s[i]) == s_set.end()){
			s_set.insert(s[i]);
			res += s[i];
		}else{
			if(res.length()>result.length()){
				result = res;
			}
			res.clear();
			s_set.clear();
		}
	}
	std::cout << result << " and size is: " << result.size();
}

int main(){
	std::string str = "abcdeffabcbb";
	longest_substring(str);
	return 0;
}