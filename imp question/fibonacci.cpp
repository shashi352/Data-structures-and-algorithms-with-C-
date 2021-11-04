#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a=0,b=1,c;
	
	cin>> n;
	if(n==1){
		cout<<a;
	}
	if(n==2){
		cout<<a<<","<<b;
	}
	else {
		cout<<a<<","<<b<<",";
	
	for(int i=1;i<=n;i++){
		c=a+b;
		cout<<c<<",";
		
		a=b;
		b=c;
	
	}
}
	return 0;
}
