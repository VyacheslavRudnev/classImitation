#ifndef bicycle_class
#define bicycle_class
#include "vehicle.h"

class Bicycle : public Vehicle
{
public: 
	Bicycle()
	{
	this->type = "Велосипед"; 
	this->max_passengers = 1;
	this->cost = 50;
	this->max_speed = 40;
	this->distance = 0;
	} 
	 
	Bicycle(int distance, int numPassengers):Bicycle()
	{
		  this->distance = distance;
		  max_passengers = numPassengers;
	}
	  
	
	void Move() override
	{ 
		cout << type << " їде зі швидкісттю : " << max_speed << " км/год" << endl;
	} 

	int Time() override
	{
		return distance / max_speed;
	}

	int Cost() override
	{
		return distance/100 * cost;
	}
	
	~Bicycle()
	{
		type.clear();
	} 
};
#endif
