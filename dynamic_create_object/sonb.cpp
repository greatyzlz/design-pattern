#include "sonb.h"
#include <iostream>

SonB::SonB()
{
    clsName = "SonB";
}

SonB::~SonB()
{

}

void SonB::eat()
{
    std::cout << clsName << " eating ...!!!" << std::endl;

}

void SonB::work()
{
    std::cout << clsName << " working ...!!!" << std::endl;
}
