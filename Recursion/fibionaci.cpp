#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	
	if(n==1 || n==0){ // base case mean than user input this than stopped here
		return n;
	}
	
	return fib(n-1) + fib(n-2); // its prov a end of fib no. on that index
	// ex - 5 fib no. is 5 in 5 findex
}


int main(){
	
	int n;
	cin>>n;
	cout<<fib(n)<<endl;

	
	return 0;
}
