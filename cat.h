#include "HomePets.h"

class Cat : public HomePets {
public:
    Cat()
    {
        this->name = "Валєра";
        this->type = "Кіт";
    }

    Cat(string name, string type)
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
        cout << "На ім'я " << this->name << ". Любить спати і не любить папугу" << endl;
    }

    void Sound() override {
        cout << this->type << " вміє казати: МУР-МУР" << endl;
    }

    void setType(string type)
    {
        this->type = type;
    }

    string getType()
    {
        return this->type;
    }

    ~Cat()
    {
        name.clear();
        type.clear();
    }
};
