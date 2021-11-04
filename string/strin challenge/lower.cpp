#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	
	string s = "i love";
	
	for(int i=0; i<=s.size();i++){
		if(s[i]>='a' || s[i]<='z'){
			s[i]-=32;
		}
	}
	cout<<s<<endl;
	
	for(int i=0; i<=s.size();i++){
		if(s[i]>='a' || s[i]<='z'){
			s[i]+=32;
		}
	}
	cout<<s;
	return 0;
}
