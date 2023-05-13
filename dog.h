#include "HomePets.h"

class Dog : public HomePets {

public:
    Dog()
    {
        this->name = "����";
        this->type = "������";
    }

    Dog(string name, string type)
    {
		this->name = name;
		this->type = type;
	}
    
    void Type() override 
    {
		cout << "�� " << this->type << endl;
	}
    
    void Show() override 
    {
        cout << "�� ��'� " << this->name << ". ������ ������� � �� ������ ����" << endl;
    }
    
    void Sound() override {
        cout << this->type << " �쳺 ������: ���-���" << endl;
    }
   
    void setType(string type)
    {
        this->type = type;
    }

    string getType()
    {
        return this->type;
    }
    
    ~Dog()
    {
        name.clear();
        type.clear();
    }
};
