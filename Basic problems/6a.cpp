#include <iostream>
#include<stdio.h>
using namespace std;

int main ()
{   int y,w,a,b;
   cin>>y>>w;
   b=max(y,w);
   a=(6-b)+1;
   if(a%2==1)
   {
       if(a==3)
        printf("1/2\n");
        else
        printf("%d/6\n",a);

   }
   else
   {
       if(a==4)
            printf("2/3\n");
        else
            printf("1/%d\n",6/a);
   }

    return 0;
}
