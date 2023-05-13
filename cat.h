#include "HomePets.h"

class Cat : public HomePets {
public:
    Cat()
    {
        this->name = "�����";
        this->type = "ʳ�";
    }

    Cat(string name, string type)
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
        cout << "�� ��'� " << this->name << ". ������ ����� � �� ������ ������" << endl;
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

    ~Cat()
    {
        name.clear();
        type.clear();
    }
};
