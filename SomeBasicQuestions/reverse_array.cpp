#include <iostream>
using namespace std;

int main()
{
	int array[6] = {2,4,6,8,12,7};
	int len = sizeof(array)/sizeof(array[0]);

	for(int x=0 ; x<len/2 ; x++){
		int temp = array[x];
		array[x] = array[len-1-x];
		array[len-1-x] = temp;
	}
	for (int i = 0; i < len; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}