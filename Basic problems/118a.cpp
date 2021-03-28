#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	string r;
	for(int i=0;i<s.size();i++){
	    char c=tolower(s[i]);
	    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || ca=='y'){
	       continue;
	    }else{
	       cout<<"."<<c;
	    }
	}
	cout<<r;
	return 0;
}
