#include<bits/stdc++.h>
#include<set>

using namespace std;

main(){
int n;
set<char> st;
string s;
cin>>n;
cin>>s;
for(int i=0;i<s.size();i++){
        st.insert(s[i]);

}

if(n<=26){
  cout<<n-st.size();
}
else{
    cout<<"-1";
}



}
