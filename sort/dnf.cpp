#include<bits/stdc++.h>
using namespace std;
// dnf mean dutch national flag 
// we we have 0,1,2 than we easally doit with that 
//low mean 0
//mid mean 1
//high mean 2 only we need to identified were we increment or not low,mid.hight 
//low and mid start together
//and high start th end of the array
 
void swap(int arr[],int i,int j){
	int temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
}

void dnfsort(int arr[],int n){
	
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr,low,mid);
			low++;
			mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr,mid,high);
			high--;
		}
	}
	
}

int main(){
	int arr[]={1,2,1,0,0,2,1,2,0,1,0,1};
	dnfsort(arr,12);
	for(int i=0;i<12;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
}
