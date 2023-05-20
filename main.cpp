#include "cat.h"
#include "dog.h"
#include "parrot.h"
#include "hamster.h"

namespace dog
{
    void dog()
    {
		Dog* dog = new Dog();
		dog->Type();
		dog->Show();
		dog->Sound();
		cout << endl << endl;
		delete dog;
	}
}

namespace cat
{
    void cat()
    {
		Cat* cat = new Cat();
		cat->Type();
		cat->Show();
		cat->Sound();
		cout << endl << endl;
		delete cat;
	}
}

namespace parrot
{
    void parrot()
    {
		Parrot* parrot = new Parrot();
		parrot->Type();
		parrot->Show();
		parrot->Sound();
		cout << endl << endl;
		delete parrot;
	}
}

namespace hamster
{
    void hamster()
    {
		Hamster* hamster = new Hamster();
		hamster->Type();
		hamster->Show();
		hamster->Sound();
		cout << endl << endl;
		delete hamster;
	}
}

int main()
{
    ukr_lang;
    
   /* HomePets** pets = new HomePets * [4]
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
    }*/

    dog::dog();
    cat::cat();
    parrot::parrot();
    hamster::hamster();


    return 0;
}