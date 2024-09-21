#include<iostream>
#include <climits>

int main(){
	int arr[] = {22, 33, 45, 46, 72, 35, 47};  // min = 22 and max = 72
	int len = sizeof(arr)/sizeof(arr[0]);
	int min = INT_MAX;
	int max = INT_MIN;

	for(int i=0 ; i<len ; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i] > max){
                        max = arr[i];
                }
	}
	std::cout << "MAX : " << max << " MIN : " << min << std::endl;
	return 0;
}
