#include<bits/stdc++.h>
using namespace std;

int update(int n ,int poss,int value){ 
	int mask =~(1<<poss); // first we ussing method clear bit
	n = n & mask;         // first we ussing method clear bit
	return n | (value<<poss); // then we are using method set bit and 
	// then after roll we found aur update bit or a ansewer
}

int main(){
	
	//  we pass number and position and last value 
	// what we make a change on a perticular position
	 
	cout<<update(5,1,1);
}
