#include "HomePets.h"

class Hamster : public HomePets {
public:
    Hamster()
    {
        this->name = "�����";
        this->type = "�����";
    }

    Hamster(string name, string type)
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
        cout << "�� ��'� " << this->name << ". ͳ���� �� ������" << endl;
    }

    void Sound() override {
        cout << this->type << " �쳺 ������: ����-����" << endl;
    }

    void setType(string type)
    {
        this->type = type;
    }

    string getType()
    {
        return this->type;
    }

    ~Hamster()
    {
        name.clear();
        type.clear();
    }
};