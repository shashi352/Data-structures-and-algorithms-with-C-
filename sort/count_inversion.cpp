#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
	 long long inv=0;
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++){
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		a[i]=arr[mid+i+1];
	}
	int i=0;
	int j=0;
	int k=l;	
	while(i<n1 && j<n2){
		if(a[i]<=a[j]){
			arr[k]=a[i];
			k++;i++;
		}else{
			arr[k]=a[j];
			inv +=n1-i;
			k++;j++;
		}
	}
	while(i<n1){
		arr[k]=a[i];
		k++;i++;
	}
	
	while(j<n2){
		arr[k]=a[j];
		k++;j++;
	}
	return inv;
	
}

long long  mergsort(int arr[],int l,int r){
	
	int long long inv=0; 
	
	if(l<r){
		int mid=(l+r)/2;
		
	    inv+=	mergsort(arr,l,mid);
		inv+=   mergsort(arr,mid+1,r);
		inv+=   merge(arr,l,mid,r);
		
	}
	return inv;
}

int main(){
	int arr[]={5,4,3,2,1};
	 mergsort(arr,0,4);
	 for(int i=0;i<5;i++){
	 	cout<<arr[i]<<" ";
	 }
	cout<<endl;
	
	
}

