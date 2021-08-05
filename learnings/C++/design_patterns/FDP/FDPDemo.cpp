#include <iostream>

#include "ToyFactory.h"
#include "Toy.h"

using namespace std;

int main()
{
    int type;
    while(1) 
    {
        cout<<"Enter type or zero to exit ?" <<endl;
        cin>>type;
        if (!type) 
        {
            break;
        }

        class Toy *v = ToyFactory::createToy(type);
        if (v) {
            v->showProduct();
            delete v;
        }
    }
    cout <<"Exit" <<endl;
    return 0;
}
