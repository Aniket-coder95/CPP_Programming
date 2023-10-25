#include<iostream>
using namespace std;


int main(){
	int n;
	cout << "Please enter your no: ";
	cin >> n;
	int num = n;

	int count = 0;
	while(num){
		count += num & 1;
		num >>= 1;
	}

	cout << "Total no of 1's in "<< n << " is: "<<count;

	return 0;
}