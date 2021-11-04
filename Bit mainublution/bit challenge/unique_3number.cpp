#include<bits/stdc++.h>
using namespace std;

int getbits(int n,int poss){
	return (n & (1<<poss)!= 0 ); // if is equal to zero than that position don't have setbit

}

int setbit(int n,int poss){
	return ( n | (1<<poss));
}

int unique_3numbers(int arr[],int n){
	int i=0;
     for(int i=0;i<64;i++){ // to cver all ower bits
     }
     	int sum =0; //
		 int result=0; 
     	for(int j=0;j<n;j++){ // fr travers array element
     		if(getbits(arr[j],i)){ // arr of j main Ith position per bit set (1) hai agar set hai to
			 sum++;         // if set tha we do sum++                  
		 }
	 }
      if(sum%3!=0){// if sum is no div by 3 than we have to set bit on that position
       result =setbit(result,i); // i denote the bit where we want to set the bit
	  }
      return result;

}

int main(){

	int arr[10]={1,2,3,4,1,2,3,1,2,3};
	

	cout<<unique_3numbers(arr,10)<<endl;

	return 0;
}
