#include <iostream>
#include "Toy.h"
using namespace std;

class Car : public Toy
{
    public:
        void prepareParts()
        {
            cout <<"Preparing car parts" <<endl;
        }
        void showProducts()
        {
            cout <<"Name: " << name << "Price: " <<price <<endl;
        }
};

class Bike : public Toy
{
    public:
        void prepareParts()
        {
            cout <<"Preparing bike parts" <<endl;
        }
        void showProducts()
        {
            cout <<"Name: " << name << "Price: " <<price <<endl;
        }
};

class Plane : public Toy
{
    public:
        void prepareParts()
        {
            cout <<"Preparing plane parts" <<endl;
        }
        void showProducts()
        {
            cout <<"Name: " << name << "Price: " <<price <<endl;
        }
};
