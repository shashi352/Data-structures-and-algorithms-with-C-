#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	bool flag=true;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		
		flag=false;
		break;
	}

	
	}
		if(n<=1){
		flag=false;
	}
	
	if(i==n || flag){
		cout<<"Prime";
	}
	else{
		cout<<"Not prime";
	}
	return 0;
}
