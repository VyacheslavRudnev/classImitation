#include "Student.h"

#ifndef class_child
#define class_child

class Aspirant : public Student
{
private:
	int age;
public:
	Aspirant()
	{
		cout << "Contructor Aspirant()" << endl;
		age = 20;
	}

	void setAge(int age)
	{
		this->age = age;
	}

	int getAge() { return age; }

	void Print()
	{
		cout << "Aspirant: " << name << " " << surname << ", age = " << age << endl;
	}

	~Aspirant()
	{
		cout << "Destructor ~Aspirant()" << endl;
	}
};

#endif
