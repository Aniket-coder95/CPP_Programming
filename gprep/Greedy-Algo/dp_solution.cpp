#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int minCoinDist(vector<int> &coins , int target){
    vector<int> dp_coins(target+1 , INT_MAX);
    dp_coins[0] = 0;

    for(int i=1 ; i<=target ; i++){
        for(auto coin : coins){
            if(i >= coin && dp_coins[i-coin] != INT_MAX){
                dp_coins[i] = min(dp_coins[i], dp_coins[i-coin]+1);
            }
        }
    }

    return (dp_coins[target] != INT_MAX) ? dp_coins[target] : -1;
}

int main(){
    vector<int> coins = {1,3,4};
    int target = 6;
    cout << "Minimum coin = " << minCoinDist(coins, target) <<endl;

    return 0;
}