#include<bits/stdc++.h>
using namespace std;

int main(){
	/*1. Selection Sort:
Idea: The inner loop selects the minimum element in the unsorted array
and places the elements in increasing order.
Time complexity: O(N2)*/
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<=n;i++){
		cin>>arr[i];
	}
	
	
	for(int i=0; i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
   	for(int i=0; i<=n;i++){
		cout<<arr[i];
	}
	
	return 0;
}
