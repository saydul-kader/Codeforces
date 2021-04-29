#include<iostream>
using namespace std;
int a[10000000];
int main()
{
	int n, m;

	cin >> n >> m;
	if(m%2!=0){
		a[0] = m/2+1;
		for(int i=1; i < n; i++){
			if(i%2 != 0)
			a[i]=a[i-1]-i;
			else
			a[i]=a[i-1]+i;
		}
	}
	else{
		a[0] = m/2;
		for(int i=1; i < n; i++){
			if(i%2 == 0)
			a[i]=a[i-1]-i;
			else
			a[i]=a[i-1]+i;
		}
	}
	for(int i=0; i < n; i++){
		cout << a[i%m] << endl;
	}
}
