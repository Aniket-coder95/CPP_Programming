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
        // cout << digit << endl;
        vector<string> tmp;
        for(auto candidate: pad[digit - '0']) {
            // cout << candidate;
            for(auto s: result) {
                // cout << s + candidate << "->";
                tmp.push_back(s + candidate);
            }
        }
        // for(auto x: tmp){
        //     cout << x << " ";
        // }
        // cout << endl;
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
	return 0;
}