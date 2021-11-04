#include<bits/stdc++.h>
using namespace std;

void revers(string s){
	
	if(s.length()==0){ // base case
		return ;
	}
	string ros = s.substr(0);
	revers(ros);
	cout<<s[0];
	
}

int main(){
	
    revers("binod");
	
	return 0;
}
