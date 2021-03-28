#include <iostream>
#include <string>
using namespace std;
main ()
{int k;
 string a;
 string b;
getline(cin,a);
getline(cin,b);
int c = a.size();
int d = b.size();
if(c==d)
{
    for(int i=0;i<c;i++)
    {
        if(a[i]==b[c-1-i])
        {
            k=1;
        }
        else
        {
          k=0;
          break;
        }

    }
    if(k==1)
        cout<<"YES";
    else
        cout<<"NO";
}
else
    {
    cout<<"NO";
    }
  return 0;
}
