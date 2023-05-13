#include "cat.h"
#include "dog.h"
#include "parrot.h"
#include <vector>

int main()
{
    ukr_lang;
    vector<Pets*> pets;
    pets.push_back(new Cat());
    pets.push_back(new Dog());
    pets.push_back(new Parrot());
    for (size_t i = 0; i < pets.size(); i++)
    {
        pets[i]->About();
        pets[i]->Say();
        
        cout << endl << endl;
    }
    for (size_t i = 0; i < pets.size(); i++)
    {
        delete pets[i];
    }
    pets.clear();
    return 0;
}