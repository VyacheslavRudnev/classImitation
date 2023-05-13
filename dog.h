#include "Pets.h"

class Dog : public Pets {
public:
    Dog()
    {
        this->name = "Рекс";
        this->type = "Собака";
    }
    void About() override {
        cout << "Це " << type << "  " << name << " Вона не любить котів" << endl;
    }
    void Say() override {
        cout << name << " каже: ГАВ    ГАВ" << endl;
    }
    ~Dog()
    {
        name.clear();
        type.clear();
    }
};
