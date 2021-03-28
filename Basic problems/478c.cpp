#include<algorithm>
#include<iostream>
using namespace std;

int main ()
{
long long int s[3];
cin>>s[0]>>s[1]>>s[2];
sort (s, s+3);
if ((s[0]+s[1]) *2<=s[2])
cout<<s[0]+s[1]<<endl;
else
cout<< (s[0]+s[1]+s[2]) /3<<endl;

return 0;
}
