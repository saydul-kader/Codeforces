#include<bits/stdc++.h>
#include<vector>

using namespace std;

main()
{
int n,a,b,v1,v2;
float t;


cin>>n>>a>>b;
vector<int> x;
vector<int> y;
vector<float> r;

for(int i=0;i<n;i++)
{
    cin>>v1>>v2;
    x.push_back(v1);
    y.push_back(v2);
}
for(int i=0;i<n;i++)
{
    t=(y[i]-b)/(x[i]-a);
    r.push_back(t);
}
cout<<r[0];
}
