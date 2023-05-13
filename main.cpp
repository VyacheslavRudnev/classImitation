#include "ForeignPassport.h"



int main() {
	Passport* passport = new Passport();
	ForeignPassport* forePass = new ForeignPassport();
	cout << endl << endl;
	passport->Print();
	cout << endl << endl;
	forePass->Print();
	cout << endl << endl;
	delete passport;
	delete forePass;

	return 0;
}