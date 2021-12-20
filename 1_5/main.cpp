#include <iostream>
#include "Sales_item.h"
Sales_item item1,item2;
void q1_20()
{
    std::cin>>item1>>item2;
    std::cout<<item1<<'\n'<<item2<<'\n';
}
void q1_21()
{
    std::cin>>item1>>item2;
    std::cout<<item1+item2<<'\n';
}
void q1_22()
{
    Sales_item sum;
    for(int i=1;i<=20;i++)
    {
        std::cin>>item1;
        sum=sum+item1;
    }
        std::cout<<sum<<'\n';

}
int main()
{
    int f;
    std::cin>>f;
    if(f==1) q1_20();
    else if(f==2) q1_21();
    else q1_22();
    return 0;
}

