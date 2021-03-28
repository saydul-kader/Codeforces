#include<bits/stdc++.h>
using namespace std;

main()
{int i,j=0;
string s;
char r[100];
cin>>s;

for(i=0;i<s.size();i++)
{
    if(s[i]!='+')
    {   r[j]=s[i];
        j++;
    }
}
sort(r,r+j);
for(i=0;i<j;i++)
{
    cout<<r[i];
    if(i<j-1)
    {
        cout<<"+";
    }
}

}
