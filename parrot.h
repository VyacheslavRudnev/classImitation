#include "Pets.h"

class Parrot : public Pets {
public:
    Parrot()
    {
        this->name = "ʺ��";
        this->type = "������";
    }
    void About() override {
        cout << "�� " << type << "  " << name << " ³� ������ ������ � ����� �����" << endl;
    }
    void Say() override {
        cout << name << " ����: ��� ���" << endl;
    }
    ~Parrot()
    {
        name.clear();
        type.clear();
    }
};