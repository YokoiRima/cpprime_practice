#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item t;
    if(std::cin>>t)
    {
        Sales_item n;
        while(std::cin>>n)
        {
            if(n.isbn()==t.isbn())
            {
                t=t+n;
            }
            else
            {
                std::cout<<t<<'\n';
                t=n;
            }
        }
    }
    return 0;
}
