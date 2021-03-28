#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

main(){
    int n;
    int x;
    int r1;
    int r2;
    vector<int> a1;
    vector<int> a2;
    vector<int> a3;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        a1.push_back(x);
    }

    for(int i=0;i<n-1;i++){
        cin>>x;
        a2.push_back(x);
    }
    for(int i=0;i<n-2;i++){
        cin>>x;
        a3.push_back(x);
    }

   sort(a1.begin(),a1.end());
   sort(a2.begin(),a2.end());
   sort(a3.begin(),a3.end());

   for(int i=0;i<n;i++){
    if(i==n-1){
        r1=a1[n-1];
        break;
    }
    if(a1[i]!=a2[i]){
        r1=a1[i];
        break;
    }

   }

   for(int i=0;i<n-1;i++){
    if(i==n-2){
        r2=a2[n-2];
        break;
    }
    if(a2[i]!=a3[i]){
        r2=a2[i];
        break;
    }

   }




cout<<r1<<endl;
cout<<r2;
}
