#include "Passport.h"

#ifndef class_child
#define class_child

class ForeignPassport : public Passport
{
private:
	bool visa;
	int numForePass;
public:
	ForeignPassport()
	{
		cout << "Contructor ForeignPassport()" << endl;
		numForePass = 123456789;
	}

	bool setVisa(bool visa)
	{
		this->visa = visa;
		return visa;
	}
	bool getVisa() { return visa; }
	void setNumForePass(int numForePass)
	{
		this->numForePass = numForePass;
	}

	int getNumForePass() { return numForePass; }

	void Print()
	{
		cout << "ForeignPassport: " << person->getName() << " " << person->getSurname() << "," << endl;
		cout << "NumForePass " << numForePass << endl;
		cout << "Visa " << visa << endl;
	}

	~ForeignPassport()
	{
		cout << "Destructor ~ForeignPassport()" << endl;
	}
};

#endif
