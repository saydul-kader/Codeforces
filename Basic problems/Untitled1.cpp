#include<iostream>
#include<string.h>

using namespace std;
main()
{
int a,i,l=0,u=0;
string b;

cin>>b;

a = b.length();

for(i=0;i<a;i++)
{
    if(b[i]>='a'&&b[i]<='z')
    {
        l=l+1;
    }
    else
    {
        u=u+1;
    }

}
if(l>=u)
    {   for(i=0;i<a;i++)
    {
        b[i] = tolower(b[i]);
    }

        cout<<b;
    }
else
    {
        for(i=0;i<a;i++)
        {
          b[i] = toupper(b[i]);
        }
        cout<<b;
    }



}
