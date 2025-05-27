#include<bits/stdc++.h>
using namespace std;

const vector<string> pad = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
	vector<string> result;
    result.push_back("");
    
    for(auto digit: digits) {
        vector<string> tmp;
        for(auto digit: pad[digit - '0']) {
            for(auto ch: result) {
                tmp.push_back(ch + digit);
            }
        }
        result.swap(tmp);
    }
    return result;
}

int main(){
	string nums;
	cout << "Enter your digits without space : ";
	cin >> nums;
	vector<string> result = letterCombinations(nums);
	for(auto num : result){
		cout << num << " ";
	}
    std::cout << std::endl;
	return 0;
}