#ifndef PARENT_H
#define PARENT_H
#include <string>
#include "objectfactory.h"

class Parent
{
public:
    Parent();
    virtual ~Parent();
    virtual void eat();
    virtual void work();


    std::string clsName;
};

#endif // PARENT_H
