#ifndef bicycle_class
#define bicycle_class
#include "vehicle.h"

class Bicycle : public Vehicle
{
public: 
	Bicycle()
	{
	this->type = "Велосипед"; 
	this->max_pass = 1;
	this->passengers = 0;
	this->cost = 50;
	this->max_speed = 40;
	this->distance = 0;
	} 
	 
	Bicycle(int distance, int numPass):Bicycle()
	{
		  this->distance = distance;
		  this->max_pass;
		  try
		  {
			  if (numPass > max_pass)
			  {
				  cout << endl;
				  throw exception("За одну поїздку велосипед може перевезти лише 1 пасажира");
			  }
		  }
		  catch (exception& ex)
		  {
			  cout << ex.what() << endl;
		  }
		  catch (...)
		  {

		  }
		  passengers = max_pass;
	}
	  
	
	void Move() override
	{ 
		cout << endl;
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
