#include<iostream>
#include<string.h>
using namespace std;

main()
{int c=0,d=0;
string a;

cin>>a;

int l=a.size();

if(l>1)
{
for(int i=0;i<l;i++)
{
    if(a[i]=='4' || a[i]=='7')
    {
       c++;
    }
     else
     {
         d++;
     }

}
if(d==0)
{
    cout<<"YES";
}
else
{
    if(c!=0 && (c=4 || c==7))
        cout<<"YES";
    else
        cout<<"NO";
}
}

else
    cout<<"NO";





}
