#include <iostream>
using namespace std;
int main()
{
    int *a,b=1,*c;
    a=&b;
    cout<<a<<' '<<b<<'\n';
    a=c;
    cout<<a<<' '<<b<<'\n';
    a=&b;
    *a=2;
    cout<<a<<' '<<b<<'\n';
    return 9;
}
