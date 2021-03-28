#include <bits/stdc++.h>
using namespace std;

main()
{
   int n,m,x,a[100];
   int y=0,z=0,c=1;
   cin>>n>>m;

   for(int j=0;j<n;j++)
   {
      cin>>x;
      y=y+x;
      for(int i=z;i<y;i++)
      {
      cin>>a[i];
      }
       z=z+x;
   }

   sort(a,a+y);
    for(int i=0;i<y-1;i++)
    {
            if(a[i]!=a[i+1])
            {
                c++;
            }
    }
    if(c==m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
