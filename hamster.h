#include "HomePets.h"

class Hamster : public HomePets {
public:
    Hamster()
    {
        this->name = "Ïðèâ³ä";
        this->type = "Õîì’ÿê";
    }

    Hamster(string name, string type)
    {
        this->name = name;
        this->type = type;
    }

    void Type() override
    {
        cout << "Öå " << this->type << endl;
    }

    void Show() override
    {
        cout << "Íà ³ì'ÿ " << this->name << ". Í³êîãî íå ëþáèòü" << endl;
    }

    void Sound() override {
        cout << this->type << " âì³º êàçàòè: ÕÐÓÌ-ÕÐÓÌ" << endl;
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