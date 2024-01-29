// CompanyInheritanceExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "CEO.h"
int main()
{
    Employee emp1("Peter", 50000);
    cout << "Employee Information:" << endl;
    emp1.PrintInfo();
    cout << endl;

    Manager manager1("Mary", 70000, 1000);
    cout << "Manager Information:" << endl;
    manager1.PrintInfo();
    cout << "Bonus: " << manager1.getBonus() << endl;
    cout << endl;

    CEO ceo1("Aniful", 100000, 2000, 5000);
    cout << "CEO Information:" << endl;
    ceo1.PrintInfo();
    cout << "Bonus: " << ceo1.getBonus() << endl;
    cout << "Shares: " << ceo1.getShares() << endl;

    return 0;
}
