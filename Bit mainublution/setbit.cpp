#include<bits/stdc++.h>
using namespace std;

int set_bit(int n,int poss){ // here pass the bit numr and its possition
	
	// actually we inserting a bit on perticular position
	// when we are insertion 1 that colled setbit
	// when we are inserting 0 that colled unsetbit
	return (n | (1<<poss));
}

int main(){
	
	cout<<set_bit(5,1);
}
