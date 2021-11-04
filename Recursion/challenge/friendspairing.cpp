#include<bits/stdc++.h>
using namespace std;

int fripairing(int n ){
	if(n==0 || n==1 || n==2){
		return n; // its self pairing happending
	}
	// first we only pair with n-1 person because beuse first person we could not include here 
	return fripairing(n-1) + fripairing(n-2)*(n-1); // (n-2)*(n-1) becuse we have sol to pair n-2 person to pairt with n-1 person we can pair with any one who include to n-1
	
	}

int main(){
	 
	 cout<<fripairing(4);// that show the way to pair of our friends

	
	return 0;
}
