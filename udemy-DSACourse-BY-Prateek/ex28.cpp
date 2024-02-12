#include <bits/stdc++.h>
using namespace std;


vector<int> findAllOccurences(int k, vector<int> v){
    int n = v.size(); 
    int lastElement = v[n-1];
    v.pop_back();
    vector <int> res;
    if(!v.empty()){
        res = findAllOccurences(k,v);
    }
    if(lastElement==k){
            res.push_back(n-1);
    }
        
    return res;
}
