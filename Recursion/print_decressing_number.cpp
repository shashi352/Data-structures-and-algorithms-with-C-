#include<bits/stdc++.h>
using namespace std;
// done by shashi
int print(int n){
	if(n==0){
		return 0;
	}
	
	cout<<n;
	return print(n-1);
	
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<print(n);

	
	return 0;
}
