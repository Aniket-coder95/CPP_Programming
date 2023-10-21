#include <iostream>

int fun(int x){
	int res;
	res = x+x;
	return res;
}

int fun(int x, int y){
	int res;
	res = x + y;
	return res;
}

int main(){
	int result1 = fun(5);
	int result2 = fun(5, 10);
	std::cout << result1 << " <-> "<< result2;
	return 0;
}