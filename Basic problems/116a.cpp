#include<iostream>
using namespace std;
main()
{
int b;
int a,n,i,m=0,t=0;
cin >> n;
for(i=0;i<n;i++)
{
    cin >> a >> b;
    t=t-a+b;
    if(t>m)
    {
        m=t;
    }

}
cout << m;

}
