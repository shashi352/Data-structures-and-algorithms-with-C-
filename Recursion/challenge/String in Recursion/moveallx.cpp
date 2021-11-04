#include<bits/stdc++.h>
using namespace std;

string moveallx(string s){
	
	if(s.length()==0){
		return "";// base case
	}
	
	char ch=s[0]; // first charecter  we store here
	string ans=moveallx(s.substr(1)); // rest of string for we do a recursive call
	
	if(ch=='x'){
		return ans+ch; // x is here than we first print ans than print our x charecter
	}
	else{
		return ch+ans;
	}
}

int main(){
	 
	 cout<<moveallx("sjgksxxxjkagxxxagksfljxxxmhfsjafxx");
	
	return 0;
}
