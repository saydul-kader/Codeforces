#include<bits/stdc++.h>

int main()
{
    int n,t,i,j;
    char s[52];
    scanf("%d%d",&n,&t);
    scanf("%s",s);
    for(j=0; j<t; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }

    }
    printf("%s\n",s);
    return 0;
}
