#include "cat.h"
#include "dog.h"
#include "parrot.h"
#include "hamster.h"



int main()
{
    ukr_lang;
    
    HomePets** pets = new HomePets * [4]
    {
        new Dog(),
        new Cat(),
        new Parrot(),
        new Hamster()
    };

    for (size_t i = 0; i < 4; i++)
    {      
        pets[i]->Type();
        pets[i]->Show();
        pets[i]->Sound();
        cout << endl << endl;
    }

    for (size_t i = 0; i < 2; i++)
    {
        delete pets[i];
    }

    return 0;
}