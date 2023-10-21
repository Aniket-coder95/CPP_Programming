#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int isAnagram(string str1, string str2){
	if(str1.length() != str2.length()){
		return 0;
	}
	std::unordered_map<char, int> map;

	for(char x:str1){
		map[x]++;
	}

	for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


	for(char y: str2){
		cout << map.find(y) <<  endl;
		if (map.find(y) == map.end() || map[y] <= 0){
			return 0;
		}
		map[y]--;
	}
	
// Check if all frequencies are zero
	for(const auto& pair : map){
		if (pair.second != 0 ){
			return 0;
		}
	}
	return 1;
}

int main(){
	std:: string str1 = "helloji";
	std:: string str2 = "jlhelio";
	if(isAnagram(str1, str2)){
		std:: cout << "Is Anagram."<<std::endl;
	}
	else{
		std:: cout << "Is not Anagram."<<std::endl;
	}
	return 0;
}