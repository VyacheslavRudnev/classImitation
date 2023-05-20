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
		cout << "������ ������� ��������: ";
		cin >> numPass;
		try
		{
			if (numPass < 0)
			{
				throw exception("ʳ������ �������� �� ���� ���� ��'�����! ��������� �� ���\n");
			}
			if (numPass == 0)
			{
				throw exception("ʳ������ �������� �� ���� ���� ��������! ��������� �� ���\n");
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
		   
	
    cout << "������ ������� � �� : ";
    cin >> distance;

	vehicles.push_back(new Car(distance, numPass));
	vehicles.push_back(new Bicycle(distance, numPass));
	vehicles.push_back(new Cart(distance, numPass));

	
	for (size_t i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Move();
        cout << "��� ����������� �������� �� ������� : " << distance << " �� ������ " << vehicles[i]->Time() << " �����" << endl;
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