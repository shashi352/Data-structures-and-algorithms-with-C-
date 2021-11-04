#include<bits/stdc++.h>
using namespace std;

int setbits(int n,int poss){
	return (n & (1<<poss)!= 0 ); // if is equal to zero than that position don't have setbit

}

void unique_numbers(int arr[],int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum^=arr[i];
	}

	int temp=xorsum; // here we have two values
	// now ower job to find right most bit on which position
	int setbit=0;
	int poss=0;
	while(setbit!=1){ //
		setbit = xorsum & 1; // after that we found the lastbit of xorsum ex 0111^0101 = 0010 ,
		// now when we 0010 AND with 1 with what we get answere we found  zero (0) ex- 0010 ^0010 =0000
		// but what we need ony one (1) so what we do right now
		poss++; // what position we found one (1) , if we don't get than poss++
		// 0111^0101 = 0010
		//                | here have zero so but we need zero so what we did we do right shifted to xorsum to get xor (1)
		xorsum = xorsum >> 1;
	}
	int newxor=0;
	for(int i=0;i<n;i++){
		if(setbits(arr[i],poss-1)){ // if position -1 have a set bit than we
		// do it xor
			newxor=newxor^arr[i]; // that new xor is one unique number
		}
	}

	cout<<newxor<<endl;
	cout<<(temp^newxor)<<endl;


}

int main(){

	int arr[8]={1,2,3,1,2,3,5,7};

	unique_numbers(arr,8);

	return 0;
}
