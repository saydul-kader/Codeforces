#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[250];
    int n , p , q;
    cin >> n >> p;
    int c = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> a[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> a[i];
    }

    sort(a , a+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(a[i] != a[i+1]){
            c++;
        }
    }

    if(n == c){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
