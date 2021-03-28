#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,c=0;
    char a[20];
    scanf("%s",a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='4'||a[i]=='7')
        {
            c++;
        }
    }
    if(c==4||c==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
