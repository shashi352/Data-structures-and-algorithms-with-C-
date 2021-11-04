#include<bits/stdc++.h>
using namespace std;

void countsort(int arr,int n){
	
	int k=arr[0];
	for(int i=0;i<n;i++){// how many element in k array
	k=max(k,arr[i]);
	}
	int count[10]={0};
	// now we are adding count ever element we get it on count array
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	// now we are modifing our count array
	for(int i=0;i<=k;i++){
		count[i]+=count[i-1];//pervious count we are adding
	}
	
	// here we creating output array and al the last we are putting value here
	int output[n];
	
	for(int i=n-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=output[i];
	}
}

int main(){
	
	int arr[9]={4,8,6,7,3,9,8,9,55};
	countsort(arr,9);
	
	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}
	
}
