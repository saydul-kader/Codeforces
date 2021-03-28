#include<iostream>
using namespace std;

main()
{int a,b,r,p=0;
cin>>a;
cin>>b;

while(b%a==0)
{
    b=b/a;
    p=p+1;

}

if(p>0 && b==1)
{   p=p-1;
    cout<<"YES"<<endl;
    cout<<p<<endl;
}
else
    cout<<"NO"<<endl;

}
