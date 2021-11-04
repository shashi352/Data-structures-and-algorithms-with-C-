#include<bits/stdc++.h>
using namespace std;

void replacepi(string s ){
	
	if(s.length()==0){ // base case
		cout<<" ";
		return ;
	}
	
	if(s[0]=='p' && s[1]=='i'){
		cout<<"3.14";
		replacepi(s.substr(2));  // because 0 (p) and 1 (i) index is print 3.14
		// afer 0 and , 1 index string we send to the recursive call
	}
	else{
		cout<<s[0];
		replacepi(s.substr(1));// because 0 (p) and 1 is not (i) index is not print 3.14 , print onlt as it is
	// 	afer 0  index string we send to the recursive call
	}
	
}

int main(){
	replacepi("pippppipppvshpi");

	
	return 0;
}
