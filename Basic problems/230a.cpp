#include <bits/stdc++.h>

using namespace std;

main()
{
    int l,i,c=1;
    char s[101];
    cin>>s;
    l=strlen(s);
    sort(s,s+l);
    for(i=0;i<l-1;i++){
        if(s[i]!=s[i+1])
            c++;
    }
    if(c%2==1)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;

}
