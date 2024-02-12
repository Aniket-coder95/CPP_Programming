#include<bits/stdc++.h>
using namespace std;

vector<int> increasingNumbers(int n) {
    vector<int> res;
    if(n > 0){
        res = increasingNumbers(n-1)
        res.push_back(n);
    }
    return res;
}
