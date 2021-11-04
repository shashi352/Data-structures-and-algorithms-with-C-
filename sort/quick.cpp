#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
	int temp = arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
}

int partition(int arr[],int l,int r){
	
	int privot = arr[r];
	int i=l-1;
	 
	
	for(int j=l;j<r;j++){
		if(arr[j]<privot){ // when j<privot than we are just swaping left side element
			i++;
			swap(arr,i,j); // when j<privot than we are just swaping left side element
		}	
	}
	// when we out of this loop than we get i+1= privot element
	swap(arr,i+1,r);
	return i+1; // its reurn a privot no. or element

}

void quicksort(int arr[],int l,int r){
	if(l<r){
		
		int pi= partition(arr,l,r);
		quicksort(arr,l,pi-1);
	, 	quicksort(arr,pi+1,r);
	}
}

int main(){
	int arr[5]={5,4,3,2,1};
	quicksort(arr,0,4);
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
