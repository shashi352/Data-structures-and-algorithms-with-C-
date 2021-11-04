#include<bits/stdc++.h>
using namespace std;

int get_bit(int n,int poss){
	// what a bit on a perticular position
	return (n&(1<<poss)!=0);
}

	
	
int main(){
	
	cout<<get_bit(5,2)<<endl; // first we pass number than we pass position 

	return 0;
}
