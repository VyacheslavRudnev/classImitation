#ifndef Pets_class
#define Pets_class
#include <iostream>
#include "windows.h"
using namespace std;
#define ukr_lang { SetConsoleCP(1251); SetConsoleOutputCP(1251);}

class Pets abstract {
protected:
    string name;
    string type;
public:
    Pets()
    {
        name = "unknow";
        type = "unknow";
    }
    virtual void Say() = 0;
    virtual void About() = 0;
    virtual ~Pets()
    {
        name.clear();
        type.clear();
    }
};
#endif
