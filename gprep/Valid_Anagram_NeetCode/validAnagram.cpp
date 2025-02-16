#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char , int> ch_map;
    if(s.size() != t.size()){
        return false;
    }

    for(auto s_char : s){ ch_map[s_char]++; }
    for(auto t_char : t){ ch_map[t_char]--; }

    for(auto check : ch_map){
        if(check.second > 0){
            return false;
        }
    }
    return true;
}

int main(){
    string first_string , second_string;
    cout << "Enter your first string " << endl;
    cin >> first_string;
    cout << "Enter your second string " << endl;
    cin >> second_string;

    string result = isAnagram(first_string , second_string) ? "Yes" : "No";

    cout << "Is these strings Anagram ? ---> " << result << endl;

    return 0;
}



/*!SECTION
In the worst case, the unordered_map contains all unique characters of the
string (O(1) ≈ O(26) for lowercase English letters).

Time Complexity: O(1) (bounded by 26 in case of English alphabets, but O(n)
in the general case)
*/