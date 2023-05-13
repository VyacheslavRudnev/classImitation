#include "car.h"
#include "bicycle.h"
#include "cart.h"
#include <vector>



int main()
{ukr_lang;
	vector<Vehicle*> vehicles;

    int numPassengers = 0;
    int distance = 0;

    cout << "¬вед≥ть к≥льк≥сть пасажир≥в: ";
    cin >> numPassengers;
    cout << "¬вед≥ть в≥дстань в км : ";
    cin >> distance;

	vehicles.push_back(new Car(distance, numPassengers));
	vehicles.push_back(new Bicycle(distance, numPassengers));
	vehicles.push_back(new Cart(distance, numPassengers));

	
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Move();
        cout << "„ас перевезенн€ пасажир≥в на в≥дстань: " << distance << " км складе " << vehicles[i]->Time() << " годин" << endl;
        cout << "¬арт≥сть перевезенн€ : " << vehicles[i]->Cost() << " грн" << endl;
		cout << "============================================" << endl;
        
	} 
    cout << endl;

    
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	} 
	vehicles.clear();
  
	return 0;
}