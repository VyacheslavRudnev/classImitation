#include "stack.h"
#include "queue.h"



int main()
{
    ukr_lang;
    
	cout << "QUEUE" << endl;
	queue<int> liqst;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.print();
	cout << "______________" << endl << endl;
	list.pop_front();
	list.print();
	cout << "______________" << endl << endl;
	list.push_back(5);
	list.pop_front();
	list.print();
	cout << "______________" << endl << endl;

	cout << "STACK" << endl;
	stack<int> list_2;
	list_2.push_back(1);
	list_2.push_back(2);
	list_2.push_back(3);
	list_2.push_back(4);
	list_2.push_back(5);
	list_2.push_back(6);
	list_2.print();
	cout << "______________" << endl << endl;
	list_2.pop_back();
	list_2.print();
	cout << "______________" << endl << endl;
	list_2.pop_back();
	list_2.print();

	return 0;
}