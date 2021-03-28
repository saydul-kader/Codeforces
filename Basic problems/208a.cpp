#include <bits/stdc++.h>

using namespace std;

main()
{
    int n,m,a,b,c=0;
	cin>>n>>m;
	for (b=0;b<=m*m;b++)
	{
		a=m-b*b;
		if(a*a+b==n&&a>=0)
			c++;
	}
	cout<<c<<endl;
	return 0;
}
