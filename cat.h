#include "Pets.h"

class Cat : public Pets{
public:
    Cat()
    {
        this->name = "�����";
        this->type = "ʳ�";
    }
    void About() override {
        cout << "�� " << type << "  " << name << " ³� ������ ����� � �� ������ �����" << endl;
    }
    void Say() override {
        cout << name << " ����: ���    ���" << endl;
    }
    ~Cat()
    {
        name.clear();
        type.clear();
    }
};
