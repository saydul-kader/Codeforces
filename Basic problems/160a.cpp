#include<iostream>
#include<algorithm>

using namespace std;

main()
{
    int a[100],i,n,c=0,b=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    sort(a,a+n);
    s=s/2;

    while(b<=s)
    {
        ++c;
        b=b+a[n-c];
    }

    cout<<c;


}
