#include "Aspirant.h"

void Test(Student* object)
{
	object->passExams();
}

int main() {
	Student* student = new Student();
	Aspirant* aspirant = new Aspirant();
	cout << endl << endl;
	student->Print();
	cout << endl << endl;
	Test(student);
	Test(aspirant);
	cout << endl << endl;
	delete student;
	delete aspirant;

	return 0;
}