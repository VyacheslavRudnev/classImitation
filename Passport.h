#include <iostream>
using namespace std;

#ifndef class_parent
#define class_parent

class Person
{
private:
	string name;
	string surname;
public:
	Person()
	{
		cout << "Contructor Person()" << endl;
		name = "Valera";
		surname = "Student";
	}
	Person(string name, string surname)
	{
		this->name = name;
		this->surname = surname;
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
	~Person()
	{
		cout << "Destructor ~Person()" << endl;
	}
};

class DayOfBirth
{
private:
	int dayBirth;
	int monthBirth;
	int yearBirth;
public:
	DayOfBirth()
	{
		cout << "Contructor DayOfBirth()" << endl;
		dayBirth = 31;
		monthBirth = 12;
		yearBirth = 2000;
	}
	DayOfBirth(int dayBirth, int monthBirth, int yearBirth)
	{
		this->dayBirth = dayBirth;
		this->monthBirth = monthBirth;
		this->yearBirth = yearBirth;
	}
	void setDayBirth(int dayBirth)
	{
		this->dayBirth = dayBirth;
	}
	void setMonthBirth(int monthBirth)
	{
		this->monthBirth = monthBirth;
	}
	void setYearBirth(int yearBirth)
	{
		this->yearBirth = yearBirth;
	}
	int getDayBirth() { return dayBirth; }
	int getMonthBirth() { return monthBirth; }
	int getYearBirth() { return yearBirth; }
	~DayOfBirth()
	{
		cout << "Destructor ~DayOfBirth()" << endl;
	}
};

class Passport
{
protected:
	Person* person = nullptr;
	DayOfBirth* dayOfBirth = nullptr;
	string series;
	int number;

public:
	Passport()
	{
		cout << "Contructor Passport()" << endl;
		person = new Person("Valera", "Student");
		dayOfBirth = new DayOfBirth(31, 12, 2000);
		series = "AA";
		number = 123456;
	}

	void Print()
	{
		cout << "Person : " << person->getName() << " " << person->getSurname() << endl;
		cout << "PassNumber : " << series << " " << number << endl;
		cout << "Date of birth : " << dayOfBirth->getDayBirth() << "." << dayOfBirth->getMonthBirth() << "." << dayOfBirth->getYearBirth() << endl;
	}

	void setSeries(string series)
	{
		this->series = series;
	}

	void setNumber(int number)
	{
		this->number = number;
	}

	string getSeries() { return series; }
	int getNumber() { return number; }

	~Passport()
	{
		delete person;
		delete dayOfBirth;
		cout << "Destructor ~Passport()" << endl;
	}
};

#endif