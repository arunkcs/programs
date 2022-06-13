#include <iostream>
#include <list>

using namespace std;

list<int> add_lists (list<int> a, list<int> b);

int main()
{
    list<int> a;
    list<int> b;
    list<int> :: iterator it_sum;
    a.push_back(9);
    a.push_back(9);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    b.push_back(1);
    b.push_back(6);
    b.push_back(8);
    list<int> sum = add_lists(a, b);
    
     for(it_sum = sum.begin(); it_sum != sum.end(); it_sum++)
     {
         cout <<"\t" << *it_sum;
     }
    
    return 0;
}

//739 + 85 = 824
//9->3->7 + 5->8 = 4->2->8
list<int> add_lists (list<int> a, list<int> b)
{
    list<int> sum;
    unsigned int digit1, digit2 = 0;
    unsigned int reminder = 0;
    unsigned int temp = 0;
    list<int> :: iterator it_a = a.begin();
    list<int> :: iterator it_b = b.begin();

    while(it_a != a.end() || it_b != b.end())
    {
        digit1, digit2 = 0;
        temp = 0;
        
        if (it_a == a.end())
        {
            digit1 = 0;
        }
        else
        {
            digit1 = *it_a;
            it_a++;
        }
            
        if (it_b == b.end())
        {
            digit2 = 0;
        }
        else
        {
            digit2 = *it_b;
            it_b++;
        }
        
        temp =  (digit1 + digit2 + reminder);
        reminder = temp / 10;
        sum.push_back(temp % 10);
    }
    
    if (reminder)
    {
        sum.push_back(reminder);
    }

    return sum;
}