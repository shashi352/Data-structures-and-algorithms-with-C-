#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n1,n2;
	cin>>n1>>n2;
	
	if(n1>n2){
		cout<<n1<<" "<< "is the maximum no.\n";
		cout<<n2<<" "<<"is the smaller element";
	}
	else if (n2>n1){
		cout<<n2<<" "<< "is the maximum no.\n";
		cout<<n1<<" "<<"is the smaller no.";
	}
	else{
		cout<<n1<<" , "<<n2<< "is are equal no.\n";
		
	}
	return 0;
}
