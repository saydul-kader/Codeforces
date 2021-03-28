#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,c=0,x;
    cin>>n>>m;

    if(m<n)
    {
        cout<<n-m<<endl;
        return 0;
    }
    while(m>n){
        if(m%2==0){
            m/=2;
            c++;
        }
        else{
            m++;
            c++;
        }
    }
    cout<<abs(c+n-m)<<endl;
    return 0;
}
