#pragma once
#include <string>

using namespace std;
class Snack
{
public:
    Snack(string);
    Snack();
    void SetName(string);
    string ReturnName();
private:
    string name;
};