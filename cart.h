#ifndef cart_class
#define cart_class
#include "vehicle.h"

class Cart : public Vehicle
{
public: Cart()
{
	this->type = "³�";
	this->max_passengers = 10;
	this->cost = 200;
	this->max_speed = 10;
	this->distance = 0;

}
	  Cart(int distance, int numPassengers):Cart()
	  {
		  this->distance = distance;
		  max_passengers = numPassengers;
	  }

	void Move() override
	{
		cout << type << " ��� � ��������� : " << max_speed << " ��/���" << endl;
	}

	int Time() override
	{
		return distance / max_speed;
	}

	int Cost() override
	{
		return distance/100 * cost;
	}

	~Cart()
	{
	  
	  type.clear();
	}
};
#endif
