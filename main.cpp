#include "stack.h"
#include "queue.h"



int main()
{
    ukr_lang;
    
	cout << "QUEUE" << endl;
	List<int>* q = new queue<int>();
	q->push_back(1);
	q->push_back(2);
	q->push_back(3);
		
	q->print();
	cout << endl;

	return 0;
}