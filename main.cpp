#include "car.h"
#include "bicycle.h"
#include "cart.h"
#include <vector>



int main()
{ukr_lang;
	vector<Vehicle*> vehicles;

    int numPass = 0;
    int distance = 0;
	do
	{
		cout << "Введіть кількість пасажирів: ";
		cin >> numPass;
		try
		{
			if (numPass < 0)
			{
				throw exception("Кількість пасажирів не може бути від'ємною! Спробуйте ще раз\n");
			}
			if (numPass == 0)
			{
				throw exception("Кількість пасажирів не може бути нульовою! Спробуйте ще раз\n");
			}
			
		}
		catch (exception& ex)
		{
			cout << ex.what() << endl;
		}
		catch (...)
		{

		}
	} 
	while (numPass <=0);
		   
	
    cout << "Введіть відстань в км : ";
    cin >> distance;

	vehicles.push_back(new Car(distance, numPass));
	vehicles.push_back(new Bicycle(distance, numPass));
	vehicles.push_back(new Cart(distance, numPass));

	
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Move();
        cout << "Час перевезення пасажирів на відстань : " << distance << " км складе " << vehicles[i]->Time() << " годин" << endl;
        cout << "Вартість перевезення : " << vehicles[i]->Cost() << " грн" << endl;
        
	} 
    cout << endl;

    
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	} 
	vehicles.clear();
  
	return 0;
}