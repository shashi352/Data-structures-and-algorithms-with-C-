#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){ // here we pass array size and its size
	int xorsum=0; // first save a uniqe valu
	for(int i=0;i<n;i++){
		xorsum^=arr[i]; // than use xor operator because xor operater save binary no. out put is zero (0) ex - 0 ^ 0 = 0 , 1 ^ 1 = 1
		// and unique no. output is alway one (1) ex - 0 ^ 1 = 1 ,1^ 0 = 1
	}
	return xorsum; // than now its return unique no. i mean that no. is not repeated in the whole array
}

int main(){
	int arr[5]={1,1,2,2,3};
	cout<<unique(arr,5);
	return 0;
}
