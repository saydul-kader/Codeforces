#include<bits/stdc++.h>

using namespace std;

main()
{
    int k,a[12],s=0,t=0,c=0,i;

    cin>>k;

    for(i=0;i<12;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }

    sort(a,a+12);


    if(k == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {   if(t<k)
        {
            cout<<"-1"<<endl;
        }

        else
        {
        for(i=11;i>=0;i--)
        {
            s=s+a[i];
            c=c+1;
            if(s>=k)
            {
                break;
            }
        }
        cout<<c<<endl;
        }
    }
}
