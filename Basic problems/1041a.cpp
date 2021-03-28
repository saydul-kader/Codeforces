#include<bits/stdc++.h>
#include<vector>

using namespace std;

main()
{int n;
 cin>>n;
 vector<int> v;
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     v.push_back(x);
 }

sort(v.begin(), v.end());

int r = v[n-1] - v[0];

int f = r+1 - n;

cout<<f;

}
