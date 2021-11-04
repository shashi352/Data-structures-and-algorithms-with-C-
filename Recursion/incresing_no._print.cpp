#include<bits/stdc++.h>
using namespace std;
// done by shashi
int print(int n){
	if(n==0){
		return 0;
	}
	
	print(n-1);
	cout<<n-1; // if cout<<n; return 0; output:- 123450
	return n; // this is also do print increment but atlast its print zero becouse we are returnig 0
	// if we dont get zero the last than we simpy do that method what i already done
	// after appy this code what i run that is :- 0112345
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<print(n);

	
	return 0;
}
