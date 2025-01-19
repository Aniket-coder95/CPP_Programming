#include <iostream>
#include <string>


class encapsulation
{
private:
	int emp_id;
	std::string name;

public:
	encapsulation(int id, std::string name) : emp_id(id), name(name){}

	std::string getName() const //Here const means not assaignment inside the get function
	{
		return name;
	}
};


int main(int argc, char const *argv[])
{
	encapsulation obj(1, "Kumar");
	std::cout << obj.getName();
	return 0;
}