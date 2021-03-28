#include <iostream>
using namespace std;
int findPile(int sum[],int mid,int start,int en,int x){
    mid = (start+en)/2;
    if(sum[mid] == x) return mid;
    if(x < sum[mid]){
        if(x>sum[mid-1]) return mid;
        else if(x==sum[mid-1]) return mid-1;
        else return findPile(sum,mid,start,mid-1,x);
    }

    else{
       if(x<sum[mid+1]) return mid;
       else if(x==sum[mid+1]) return mid+1;
        else return findPile(sum,mid,mid+1,en,x);
    }
}
int main() {
	int n,m;
	cin>>n;
	int a[n+1];
	int s[n+1];
    s[0] = 0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i] = a[i] + s[i-1];
	}

	cin>>m;
	int b[m+1];
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	int r[m];
	for(int i = 1;i<=m;i++){
        r[i]=findPile(s,0,1,n,b[i]);
	}

	for(int i = 1;i<=m;i++){
        cout<<r[i]<<endl;
	}

	return 0;
}
