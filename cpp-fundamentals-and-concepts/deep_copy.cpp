#include <iostream>
using namespace std;

class deep_copy{
	int emp_id;
	int* salary;
public:
	deep_copy(int id, int sal){
		emp_id = id;
		salary = new int;
		*salary = sal;
	}

	deep_copy(const deep_copy& cp){
		salary = new int;
		emp_id = cp.emp_id;
		salary = cp.salary;
	}
	void show(){
		cout << emp_id << " -> " << *salary<<endl;
	}

};

int main(){
	deep_copy* obj = new deep_copy(1, 20000);
	obj->show();
	deep_copy* new_obj = new deep_copy(*obj);
	delete(obj); // even after deletin of object it will print same values
	new_obj->show();
	return 0;
}