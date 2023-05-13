#include <iostream>
using namespace std;

#ifndef class_parent
#define class_parent

class Student
{
protected:
	string name;
	string surname;

public:
	Student()
	{
		cout << "Contructor Student()" << endl;
		name = "Valera";
		surname = "Student";
	}

	Student(string name, string surname)
	{
		this->name = name;
		this->surname = surname;
	}

	void Print()
	{
		cout << "Student: " << name << " " << surname << endl;
	}

	void passExams()
	{
		cout << "let's record!" << endl;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setSurname(string surname)
	{
		this->surname = surname;
	}

	string getName() { return name; }
	string getSurname() { return surname; }

	~Student()
	{
		cout << "Destructor ~Student()" << endl;
	}
};

#endif