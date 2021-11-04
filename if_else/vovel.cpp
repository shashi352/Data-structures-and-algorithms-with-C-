#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
    int vovel;
    cout<<"enter the alphabet\n";
    cin>>c;
    vovel =(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
	
	if(vovel==true){
		cout<<"this is a vovel";
	}
	else{
		cout<<"this is a consonent";
	}
	return 0;
}
