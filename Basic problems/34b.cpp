#include<bits/stdc++.h>
#include<vector>
using namespace std;

main()
{
int n,t,c=0;
int r=0;
vector<int> v;

cin>>n>>t;

for(int i = 0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}

sort(v.begin(), v.end());

for(int i=0;i<n;i++)
{
        if((r+v[i])<=t)
        {
            r=r+(v[i]);
            c++;

        }

}
cout<<c;

}
