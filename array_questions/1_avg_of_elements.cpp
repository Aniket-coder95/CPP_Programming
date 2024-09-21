#include <iostream>

int main(){
	int arr[] = {1,4,6,87,0,2,4,6};
	double sum = 0 ;
	int len = sizeof(arr)/sizeof(arr[0]);
	std::cout<< "Array is :";
	for(int i =0 ; i<len ; i++){
		std::cout << arr[i] << " ";
		sum += arr[i];	
	}
	std::cout << std::endl;
	std::cout << "Sum is: " << sum/len << std::endl;
}
