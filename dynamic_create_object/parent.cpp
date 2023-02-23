#include "parent.h"
#include <iostream>


Parent::Parent():clsName("Parent")
{

}

Parent::~Parent()
{

}

void Parent::eat()
{
    std::cout << clsName << " eating ...!!!" << std::endl;

}

void Parent::work()
{
    std::cout << clsName << "  working ...!!!" << std::endl;
}
