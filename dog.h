#include "Pets.h"

class Dog : public Pets {
public:
    Dog()
    {
        this->name = "����";
        this->type = "������";
    }
    void About() override {
        cout << "�� " << type << "  " << name << " ���� �� ������ ����" << endl;
    }
    void Say() override {
        cout << name << " ����: ���    ���" << endl;
    }
    ~Dog()
    {
        name.clear();
        type.clear();
    }
};
