#include<iostream>
#include<string>

using namespace std;

main()
{   int i,n,d=1,b=0;
    string a[20];
    string c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[0].compare(a[i])==0)
        {
            d++;
        }
        else
        {
            b++;
            c=a[i];
        }

    }

    if(d>b)
        {cout<<a[0];}
    else
        {cout<<c;}
}
