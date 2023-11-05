#include<iostream>
using namespace std;

class shallow_copy{
	int emp_id;
	int salary;
public:
	shallow_copy() = default;
	shallow_copy(int id, int sal){
		emp_id = id;
		salary = sal;
	}
	void show(){
		cout << emp_id <<" -> " << salary << endl;
	}
};

int main(){
	shallow_copy obj = shallow_copy(10, 20);
	obj.show();
	shallow_copy new_obj;
	new_obj = obj;
	new_obj.show();

	return 0;
}