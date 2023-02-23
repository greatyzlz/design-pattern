#include "objectfactory.h"
#include <iostream>

std::map<const std::string, NewInstancePtr> ObjectFactory::dynCreateMap;

void *ObjectFactory::CreateObject(const std::string& clsName)
{
    auto it = dynCreateMap.find(clsName);

    if (it == dynCreateMap.end())
    {
        return nullptr;
    }

    NewInstancePtr np = it->second;
    return np();
}

void ObjectFactory::RegisterClass(const std::string& clsName, NewInstancePtr np)
{
    std::string a = clsName;
//    dynCreateMap.insert(std::pair<std::string, NewInstancePtr>(clsName, np));
    dynCreateMap[clsName] = np;
//    std::cout << "register " << "clsName" << std::endl;
}




Register::Register(const std::string& clsName, NewInstancePtr np)
{
    ObjectFactory::RegisterClass(clsName, np);
}
