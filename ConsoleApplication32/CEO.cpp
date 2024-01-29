#include "CEO.h"

void CEO::setShares(int s)
{
    shares = s;
}

int CEO::getShares()
{
    return shares;
}

CEO::CEO() : Manager()
{
    setShares(1000);
}

CEO::CEO(string name, float salary, float bonus, int shares) : Manager(name, salary, bonus)
{
    setShares(shares);
}
