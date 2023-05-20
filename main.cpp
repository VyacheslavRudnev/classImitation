#include "car.h"
#include "bicycle.h"
#include "cart.h"
#include <vector>



int main()
{ukr_lang;
	vector<Vehicle*> vehicles;

    int numPassengers = 0;
    int distance = 0;
	do
	{
		cout << "������ ������� ��������: ";
		cin >> numPassengers;
		try
		{
			if (numPassengers < 0)
			{
				throw exception("ʳ������ �������� �� ���� ���� ��'�����! ��������� �� ���\n");
			}
			if (numPassengers == 0)
			{
				throw exception("ʳ������ �������� �� ���� ���� ��������! ��������� �� ���\n");
			}
		}
		/*catch (exception& numPassengers)
		{
			cout << numPassengers.what() << endl;
		}
		catch (const string& str)
		{
			cerr << "ʳ������ �������� �� ���� ���� ���� string" << '\n\n';
		}
		catch (...)
		{

		}*/
	} 
	while (numPassengers <=0);
		   
	
    cout << "������ ������� � �� : ";
    cin >> distance;

	vehicles.push_back(new Car(distance, numPassengers));
	vehicles.push_back(new Bicycle(distance, numPassengers));
	vehicles.push_back(new Cart(distance, numPassengers));

	
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Move();
        cout << "��� ����������� �������� �� �������: " << distance << " �� ������ " << vehicles[i]->Time() << " �����" << endl;
        cout << "������� ����������� : " << vehicles[i]->Cost() << " ���" << endl;
        
	} 
    cout << endl;

    
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	} 
	vehicles.clear();
  
	return 0;
}