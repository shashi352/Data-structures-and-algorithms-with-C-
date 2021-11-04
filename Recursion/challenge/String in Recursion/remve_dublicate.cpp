#include<bits/stdc++.h>
using namespace std;

string rev_dublicate(string s){
	
	if(s.length() == 0){ // base case
		return "";
	}
	char ch=s[0];
	string ans = rev_dublicate(s.substr(1)); // the rest of string we call back to the string
	
	if(ch==ans[0]){
		 return ans;
	}else{ 
	     return (ch+ans);
	}
}

int main(){
	cout<<rev_dublicate("aaabbbbgagagjjjjjhhhhs");

	
	return 0;
}
