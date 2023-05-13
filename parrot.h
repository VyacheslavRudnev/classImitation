#include "Pets.h"

class Parrot : public Pets {
public:
    Parrot()
    {
        this->name = "Кєша";
        this->type = "Папуга";
    }
    void About() override {
        cout << "Це " << type << "  " << name << " Він любить співати і більше нікого" << endl;
    }
    void Say() override {
        cout << name << " каже: Кар Кар" << endl;
    }
    ~Parrot()
    {
        name.clear();
        type.clear();
    }
};