#include <iostream>
#include "parent.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Parent * Base = static_cast<Parent*>(ObjectFactory::CreateObject("SonA"));
    if (!Base)
    {
        cout << "base error" << endl;
        exit(-1);
    }
    Base->eat();
    Base->work();
    return 0;
}
