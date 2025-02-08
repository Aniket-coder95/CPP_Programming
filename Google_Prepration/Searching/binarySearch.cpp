// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void binarySearch(vector<int> &arr , int target){
    auto it = lower_bound(arr.begin(), arr.end() , target);
    if(it != arr.end() && *it == target){
        cout << "Element found at index " << it - arr.begin() << endl;
    }else{
        cout << "Element not found." <<endl;
    }
}

int main() {
    vector<int> arr = {1,4,6,7,9,10,13,15,16};
    int target;
    cout << "ENTER Your taget value" << endl;
    cin >> target;
    binarySearch(arr, target);

    return 0;
}