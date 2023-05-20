#ifndef cart_class
#define cart_class
#include "vehicle.h"

class Cart : public Vehicle
{
public: Cart()
{
	this->type = "Віз";
	this->max_pass = 10;
	this->cost = 200;
	this->max_speed = 10;
	this->distance = 0;

}
	  Cart(int distance, int numPass):Cart()
	  {
		  this->distance = distance;
		  this->max_pass;
		  try
		  {
			  if (numPass > max_pass)
			  {
				  cout << endl;
				  throw exception("За одну поїздку віз може перевезти лише 10 пасажирів");
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

	~Cart()
	{
	  
	  type.clear();
	}
};
#endif
