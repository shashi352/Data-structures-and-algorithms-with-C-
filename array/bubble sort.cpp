#include<bits/stdc++.h>
using namespace std;

int main(){
	/*2. Bubble Sort:
Idea: if arr[i] > arr[i+1] swap them. To place the element in their respective
position, we have to do the following operation N-1 times.
Time Complexity: O(N2)*/
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<=n;i++){
		cin>>arr[i];
	}
	int count=0;

    while(count<n-1){
	
	for(int i=0; i<=n-count-1;i++){
		
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
	}
	count++;
}
	
   	for(int i=0; i<=n;i++){
		cout<<arr[i];
	}
	
	return 0;
}
