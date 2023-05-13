#ifndef HomePets_class
#define HomePets_class
#include <iostream>
#include "windows.h"
using namespace std;
#define ukr_lang { SetConsoleCP(1251); SetConsoleOutputCP(1251);}

class HomePets abstract {
protected:
    string name;
    string type;
public:
    HomePets()
    {
        name = "unknow";
        type = "unknow";
    }

    HomePets(string name, string type)
    {
		this->name = name;
		this->type = type;
	}

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    virtual void Sound() = 0;
    virtual void Show() = 0;
    virtual void Type() = 0;

    virtual ~HomePets()
    {
        name.clear();
        type.clear();
    }
};
#endif
