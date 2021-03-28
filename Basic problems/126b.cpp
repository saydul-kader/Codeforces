#include<bits/stdc++.h>

using namespace std;

main()
{
 int n,r=0,tu,tl;
 vector<int> a;

 cin>>n;
 for(int i=0;i<n;i++)
 {   int x;
     cin>>x;
     a.push_back(x);
 }
 for(int i=0;i<n-1;i++)
 {
     if(a[i]>a[i+1])
     {
         tl=a[i]-a[i+1];
         r=r+tl+2;
     }
     else
     {
         tu=a[i+1] - a[i];
         r=r+tu+2;
     }

 }
 r=r+a[0]+1;
 cout<<r;
}
