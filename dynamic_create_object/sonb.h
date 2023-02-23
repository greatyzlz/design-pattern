#ifndef SONB_H
#define SONB_H
#include "parent.h"

class SonB : public Parent
{
public:
    SonB();
    ~SonB();
    void eat() override;
    void work() override;
};
REGISTER_CLASS(SonB);
#endif // SONB_H
