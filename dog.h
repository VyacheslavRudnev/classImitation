#include "HomePets.h"

class Dog : public HomePets {

public:
    Dog()
    {
        this->name = "Рекс";
        this->type = "Собака";
    }

    Dog(string name, string type)
    {
		this->name = name;
		this->type = type;
	}
    
    void Type() override 
    {
		cout << "Це " << this->type << endl;
	}
    
    void Show() override 
    {
        cout << "На ім'я " << this->name << ". Любить гратись і не любить кота" << endl;
    }
    
    void Sound() override {
        cout << this->type << " вміє казати: ГАВ-ГАВ" << endl;
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
