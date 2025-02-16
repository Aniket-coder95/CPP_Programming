#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool hasDuplicate(vector<int> &nums){
    unordered_map<int, int> freq;

        for(auto num : nums){
            //std::cout << freq[num] <<std::endl;
            if(freq[num] > 0){
                return true;
            }
            freq[num]++;
        }
        return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};   // also check by making duplicate element
    bool result = hasDuplicate(arr);
    cout << result << endl ;
    return 0;
}