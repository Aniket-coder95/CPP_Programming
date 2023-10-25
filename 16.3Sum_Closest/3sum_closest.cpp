#include<iostream>
#include<algorithm>
#include <climits>
#include<vector>
using namespace std;

int ThreeSumClosest(vector<int> nums , int target){
	int closest = INT_MAX;
    sort(nums.begin(), nums.end());
    int res = 0;
    for(int i=0 ; i<nums.size()-2; i++){
        int l = i+1 , r = nums.size()-1;
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
            int dist = (sum < target)? (target -sum) : (sum - target) ;
            if(dist < closest){
                res = sum;
                closest = dist;
            }
            if(target > sum){
                l++;
            }else{
                r--;
            }
        }
    }
    return res;
}

int main(){
	vector<int> vect = {-1,2,1,-4};
	int target = 2;
	int res = ThreeSumClosest(vect , target);
	cout << "Ans: " << res;
}