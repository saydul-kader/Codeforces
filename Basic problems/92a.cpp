#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int n, m, i;
    while( scanf("%d %d",&n,&m)==2)
    {
        i=1;
        while(1)
        {
             if(m<i)
             {
                 break;
             }
             m = m-i;
             if(i==n)
             {
                 i=1;
                 i=i-1;
             }
             i=i+1;
        }
        printf("%d\n", m);
    }
}
