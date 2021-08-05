#include <iostream>
using namespace std;

class Toy
{
    protected:
        string name;
        float price;
    public:
        virtual void prepareParts() = 0;
        virtual void showProducts() = 0;
};


