#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	
	if(n==0){
		return 1;
	}
	int prevfact= fact(n-1);
	return n*prevfact;// ex= 3,3-1=2==coll= 3*2 .... 6*1 =6
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<fact(n)<<endl;

	
	return 0;
}
