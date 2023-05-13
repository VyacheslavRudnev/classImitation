#ifndef car_class
#define car_class
#include "vehicle.h"


class Car : public Vehicle
{
public: 
	Car() 
	{
	this->type = "Àâòîìîá³ëü"; 
	this->max_passengers=4;
	this->cost=500;
	this->max_speed=100;
	this->distance = 0;
	} 

	Car(int distance, int numPassengers):Car()
	{
		this->distance = distance;
		max_passengers = numPassengers;
	}



	void Move() override
	{
		cout << type << " ¿äå ç³ øâèäê³ñòòþ : " << max_speed << " êì/ãîä" << endl;
	}

	int Time() override 
	{
		return distance / max_speed;
	}
	
	int Cost() override
	{
		return distance/100 * cost; 
	}
	
	~Car() 
	{
				type.clear(); 
	}
};
#endif
