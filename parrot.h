#include "HomePets.h"

class Parrot : public HomePets {
public:
    Parrot()
    {
        this->name = "ʺ��";
        this->type = "������";
    }

    Parrot(string name, string type)
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
        cout << "�� ��'� " << this->name << ". ������ ������" << endl;
    }

    void Sound() override {
        cout << this->type << " �쳺 ������: ��� ���" << endl;
    }

    void setType(string type)
    {
        this->type = type;
    }

    string getType()
    {
        return this->type;
    }

    ~Parrot()
    {
        name.clear();
        type.clear();
    }
};