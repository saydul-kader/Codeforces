#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
int i,j=0,n,s=0,d, a[7];
cin>>n;

for(i=0;i<7;i++)
{
    cin>>a[i];
}
while(j<7)
{

    s=s+a[j];
    if(s>=n)
    {   d=j+1;
        break;
    }
    if(j==6 && s<n)
    {
        j=-1;
    }
    j++;
}

cout<<d;




}
