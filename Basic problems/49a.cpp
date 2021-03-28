#include<iostream>

using namespace std;

main()
{   int i;
    char a;
    string q;
    getline(cin,q);
    for(i=q.size();i>=0;i--)
    {
      a=tolower(q[i]);
    if(!(a >= 'a' && a <= 'z')){continue;}
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')
        cout<<"YES";
    else
        cout<<"NO";

    break;
    }

}
