#include <iostream>
using namespace std;
int main()
{
    int Call=0,T,mid1=0,mid2=0,mid3=0,mid4=0,E1,E2,E3,pjplus,mid5=0,pjminus,mid6=0,mid7=0,mid8=0;
    int a[105],r[105],h[105],t[105],e[105],c[105],beta[105],pc[105],Pl[105];
    bool f=1;
    //计算限制条件1
    for(int j=1;j<=E1;++j)
    {
        mid1+=24*pjplus;
    }
    for(int j=E1+1;j<=E3;++j)
    {
        mid2+=pjplus*t[j];
    }
    //计算限制2-1
    for(int j=1;j<=E2;++j)
    {
        mid4 += pjplus*beta[j];
    }
    for(int j=E2+1;j<=E3;++j)
    {
        mid5 += pjminus * beta[j] ;

    }
    //计算限制2-2
    for(int j=1;j <= E3 ; ++j )
    {

        mid7 += pjplus * beta[j] ;

    }
    //本篇
    for(int i=1;i<=T;++i)
    {

        mid3+=a[i]*c[i]*e[i];
        mid6+=a[i]*pc[i];
        mid8 += a[i] * Pl[i] ;
        //判断1
        if((mid1+mid2) <= mid3 && ((mid1+mid2)*1.2>=mid3))
        {

        }
        else
        {
            f = 0;
            continue;
        }
        //判断2-1
        if((mid4+mid5) <= mid6 )
        {

        }
        else
        {
            f = 0 ;

            continue; ;

        }
        //判断2-2
        if( mid7 <= mid8 )

        {
            Call+=a[i]*r[i]*(1+h[i]);
        }

        else
        {

            f=0;

            continue;
        }

    }
    if ( f ) cout << Call << '\n' ;

    else cout << "error" << '\n' ;

    return 0;
}
