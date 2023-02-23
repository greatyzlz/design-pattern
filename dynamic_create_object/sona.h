#ifndef SONA_H
#define SONA_H
#include "parent.h"

class SonA : public Parent
{
public:
    SonA();
    ~SonA();
    void eat() override;
    void work() override;
};
REGISTER_CLASS(SonA);

#endif // SONA_H
