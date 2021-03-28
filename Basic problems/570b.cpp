#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,m,n,mid;
    while(cin>>n>>m)
    {
        mid=n/2;
         if(n==1 && m==1)
             cout<<"1\n";
        else if(mid<m)
            cout<<m-1<<endl;
        else
            cout<<m+1<<endl;
    }
    return 0;
}

