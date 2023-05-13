#ifndef vehicle_class
#define vehicle_class
#include <iostream>
#include "windows.h"
using namespace std;
#define ukr_lang { SetConsoleCP(1251); SetConsoleOutputCP(1251);}

class Vehicle abstract
{
protected:
	string type;
	int max_speed;
	int distance;
	int max_passengers;
	int cost;
	
public: 
	Vehicle()
	{
		type = "unknow";
		max_speed = 0;
		distance = 0;
		max_passengers = 0;
		cost = 0;
	} 
	Vehicle(int distance, int numPassengers)
	{
		type = "unknow";
		max_speed = 0;
		this->distance = distance;
		max_passengers = numPassengers;
		cost = 0;
	}
	
	virtual void Move() = 0; 
	virtual int Time() = 0; 
	virtual int Cost() = 0;

	virtual ~Vehicle()
	{ 
		type.clear(); 
	} 
}; 
#endif
