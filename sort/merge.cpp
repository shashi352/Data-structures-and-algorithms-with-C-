#include<bits/stdc++.h>
using namespace std;
// here we are recide twp type of arr first l to mid and second one is mid+1 to r
void merge(int arr[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<=n1;i++){ // // first part arr puting values in here 
		a[i]=arr[l+i];
	}
	
	for(int i=0;i<=n2;i++){ // second part we putting value in here
		b[i]=arr[mid+1+i];
	}
	
	// traversing both arr we insilized with zero
	int i=0; // for comparison we intilizedhere i
	int j=0;// for comparison we intilizedhere j
	int k=l;// that traver a new arr
	
    while(i<n1 && j<n2){
    	if( a[i]>b[j] ){
    		arr[k]=b[j];
    		j++;
    		k++;
		}else{
			arr[k]=a[i];
			i++;
			k++;
		}
	}
	
	while(i<n1){ // this array is already sorted so we dont need to here
			arr[k]=a[i];
			k++;
			i++;
	}
	while(j<n2){// similarly this also sorted array 
			arr[k]=b[j];
			k++;
			j++;
	}
	
}

void mergesort(int arr[],int l, int r){
	if(l<r){
		
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		
		merge(arr,l,mid,r);
		
	}
}

int main(){
	 int arr[]={5,4,3,2,1};
	 mergesort(arr,0,4);
	 for(int i=0;i<5;i++){
	 	cout<<arr[i]<<" ";
	 }
	cout<<endl;
}
