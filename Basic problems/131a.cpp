#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0;
    char s[100];
    scanf("%s",s);
    for(i=1; i<strlen(s); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            j++;
        }
    }
    if(j==strlen(s)-1)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65&&s[i]<=90)
            s[i]=97+s[i]-65;
            else if(s[i]>=97&&s[i]<=122)
            s[i]=65+s[i]-97;
        }
    }

    printf("%s\n",s);
    return 0;
}


