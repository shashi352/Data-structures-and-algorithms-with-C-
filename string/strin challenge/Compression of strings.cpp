#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s ="aaaaaaabbbbbbbbgggggggggddddddd";
	char ans[100];
	ans[0]=s[0];
	int cut=1;
	
	for(int i=1;i<=s.size();i++){
		
		if(s[i]!=s[i-1]){
			ans[cut]= s[i];
			cut++;
		}
	}
	
	cout<<ans<<endl;
	cout<<cut<<endl;
	
	return 0;
}
