#include<bits/stdc++.h>
using namespace std;

int sum(int n){

if(n==0){
	return 0;// then we have to just stoped that loop
}

int prevsum =sum(n-1); // here n become as smaller as its can suppose n,b-1,n-2,n-3........ 0
return n + prevsum;
	
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<sum(n)<<endl;

	
	return 0;
}
