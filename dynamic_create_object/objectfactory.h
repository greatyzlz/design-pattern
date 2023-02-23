#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H
#include <map>
#include <string>

typedef void * (*NewInstancePtr)();

class ObjectFactory
{
public:
    static void * CreateObject(const std::string& clsName);

    static void RegisterClass(const std::string& clsName, NewInstancePtr np);
//private:
    static std::map<const std::string, NewInstancePtr> dynCreateMap;

};


struct Register{
    Register(const std::string& clsName, NewInstancePtr np);
};

#define REGISTER_CLASS(class_name)  \
class class_name##Register  \
{   \
public: \
    static void * NewInstance(){return static_cast<void*>(new class_name());}  \
private:    \
    static Register reg;    \
};  \
Register class_name##Register::reg(""#class_name"", class_name##Register::NewInstance)

#endif // OBJECTFACTORY_H
