#ifndef car_class
#define car_class
#include "vehicle.h"


class Car : public Vehicle
{
public: 
	Car() 
	{
	this->type = "Автомобіль";
	this->max_pass=4;
	this->passengers=0;
	this->cost=500;
	this->max_speed=100;
	this->distance = 0;
	} 

	Car(int distance, int numPass):Car()
	{
		this->distance = distance;
		this->max_pass;
		try
		{
			if (numPass > max_pass)
			{
				cout << endl;
				throw exception("За одну поїздку автомобіль може перевезти лише 4 пасажири");
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
		return distance/100 * cost*passengers;
	}
	
	~Car() 
	{
				type.clear(); 
	}
};
#endif
