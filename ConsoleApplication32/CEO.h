#pragma once
#include "Manager.h"

class CEO : public Manager
{
private:
    int shares;

public:
    void setShares(int s);
    int getShares();

    CEO();
    CEO(string name, float salary, float bonus, int shares);
};

