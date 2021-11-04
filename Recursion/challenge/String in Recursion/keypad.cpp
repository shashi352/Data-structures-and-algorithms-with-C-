#include<bits/stdc++.h>
using namespace std;


string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return ;
	}

	char ch = s[0];
	string code = keypad[ch-'0'] // here ch is a charecter but we want integer so what we did it
	// we simpy ch -'0' because when we did it than we conver char into integer here zero its charecter
	// so we are simply do it simpy (-) the ascii code of both ch and  '0'

	string ros = s.substr(1); // savein ros

	// what ever we found simpy code simply we travers all
	// by zero to 1
	for(int i=0;i<=code;i++){
		keypad(ros,ans+code[i]);
	}

}

int main(){

    keypad("23","");

	return 0;
}

