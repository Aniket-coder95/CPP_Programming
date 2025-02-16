#include<iostream>
#include<string>

using namespace std;

void allCombination(const string& str, int index , string curr){
    if(!curr.empty()){
        cout << curr <<"  ";
    }

    for(int i = index ; i<str.size() ; i++){
        curr.push_back(str[i]);
        allCombination(str , i + 1 , curr);
        curr.pop_back();
    }
    cout << endl;
}

int main(){
    string str = "ABC";
    allCombination(str , 0, "");
    return 0;
}