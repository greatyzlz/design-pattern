#include "sona.h"
#include <iostream>

SonA::SonA()
{
    clsName = "SonA";
}

SonA::~SonA()
{

}

void SonA::eat()
{
    std::cout << clsName << " eating ...!!!" << std::endl;

}

void SonA::work()
{
    std::cout << clsName << " working ...!!!" << std::endl;
}
