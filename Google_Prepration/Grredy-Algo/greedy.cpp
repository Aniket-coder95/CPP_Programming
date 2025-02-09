#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minCoinDist(vector<int> &coins , int target){
    int result = 0;
    sort(coins.begin() , coins.end());
    
    for(int i = coins.size()-1 ; i>=0 ; i--){
        int coin= target/coins[i];
        target -= coin*coins[i];
        if(target == 0){
            break;
        }
        result += coin;
    }
    return result;
}

int main(){
    vector<int> coins = {1,2,5,10};
    int target = 39;
    cout << "Minimum coin = " << minCoinDist(coins, target) <<endl;

    return 0;
}


/*
When using the greedy approach to make change for the amount 20 with 
the coin denominations [18, 1, 10], the algorithm starts by selecting 
the largest coin value that is less than or equal to the target amount. 
In this case, the largest coin is 18, so the algorithm selects one 18 coin. 
After subtracting 18 from 20, the remaining amount is 2.
At this point, the greedy algorithm chooses the next largest coin less than 
or equal to 2, which is 1. It then selects two 1 coins to make up the 
remaining amount. So, the greedy approach results in using one 18 coin 
and two 1 coins. However, the greedy approach fails to find the optimal 
solution in this case. Although it uses three coins, a better solution 
would have been to use two 10 coins, resulting in a total of only two 
coins (10 + 10 = 20).
*/