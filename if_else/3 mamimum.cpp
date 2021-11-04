#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"ENTER THE THREE NO. AND SEE WHAT NO. IS MAXIMUM VALUE\n";
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<"a is have "<<a<<"  maximum value";
	}
	else if(b>a && b>b){
		cout<<"c is have "<<b<<"  maximum value";
	}
	else{
		cout<<"c is have "<<c<<"  maximum value";
	}
	
	return 0;
}
