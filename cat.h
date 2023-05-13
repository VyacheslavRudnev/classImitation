#include "Pets.h"

class Cat : public Pets{
public:
    Cat()
    {
        this->name = "Валєра";
        this->type = "Кіт";
    }
    void About() override {
        cout << "Це " << type << "  " << name << " Він любить спати і не любить собак" << endl;
    }
    void Say() override {
        cout << name << " каже: МУР    МУР" << endl;
    }
    ~Cat()
    {
        name.clear();
        type.clear();
    }
};
