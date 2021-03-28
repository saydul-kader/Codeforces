#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

main()
{
    int n,a[1000],hp=1,i,p=1,c=1;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            c++;
            p=1;
        }
        if(a[i]==a[i-1])
        {
            p++;
            if(p>hp)
            {
                hp=p;
            }
        }
    }

   cout<<hp<<" "<<c;
   return 0;
}


