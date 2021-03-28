#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,p,r;

    cin>>n>>k;

    if(n%2==0)
    {
        p=n/2;
    }
    else
    {
        p=(n/2)+1;
    }

    if(k<=p)
    {
        r=(2*k)-1;
    }
    else
    {
        r=(k-p)*2;
    }

    cout<<r<<endl;



    return 0;
}
