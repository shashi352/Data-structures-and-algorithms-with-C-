#include<bits/stdc++.h>
using namespace std;

void subseqence(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string ros = s.substr(1); // rest of string we send foragain function call or recursion call
    subseqence(ros,ans); // first we not ada any charecter
	subseqence(ros,ans+ch); // secand time we are add any charecter
	
}

int main(){
	
	subseqence("love"," ");// call our function

	
	return 0;
}
