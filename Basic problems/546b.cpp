#include<bits/stdc++.h>
using namespace std;
int check_digit(int n){
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    long long int n,d,ans=0,i,x=9,y=9,z=9;
    cin>>n;
    d=check_digit(n);
    if(d==1){
        ans=n;
    }
    else{
        for(i=1;i<d;i++){
            ans+=i*x;
            z=y;
            x*=10;
            y=(z*10)+9;
        }
        ans+=d*(n-z);
    }
    cout<<ans<<endl;
    return 0;
}

