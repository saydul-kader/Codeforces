#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,r,i;
    scanf("%d%d",&n,&m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    r=a[n-1]-a[0];
    for(i=0;i<=m-n;i++){
        if(a[i+n-1]-a[i]<r)
            r=a[i+n-1]-a[i];
    }
    printf("%d\n",r);
    return 0;
}
