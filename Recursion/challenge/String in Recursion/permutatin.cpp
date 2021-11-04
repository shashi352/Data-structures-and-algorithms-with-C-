#include<bits/stdc++.h>
using namespace std;
 
void permutation(string s,string ans){
	
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<=s.length();i++){
	// we store the first charecter of string
	char ch=s[0];
	// 0 is the first charecter of string and i is the lenght
	string ros=s.substr(0,i)+s.substr(i+1); //i+1 is the on i+1 charecter here we could not mention the length 
	permutation(ros,ans+ch); // here first the rest of string and ans+ch we send to the permuted 
	//
}
	
	
} 
 
int main(){
	
	permutation("ABC"," ");
	 
	
	return 0;
}
