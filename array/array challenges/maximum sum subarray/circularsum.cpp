#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
	int currsum=0;
    int maxsum=INT_MIN;
    
    for(int i=0;i<n;i++){
    	currsum+=arr[i];
    	if(currsum<0){ // for neglate negative integer
    		currsum =0;
    		 
		}
		maxsum=max(currsum,maxsum);
	}
	
    return maxsum;
}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int wrapsum;
	int nonwrapsum;
	
	nonwrapsum = kadane(arr,n); // jo  positive honge unko sirf + hoga
	int totalsum = 0;
	for(int i=0;i<n;i++){ // sing sab ka revers karenge fir sab ko jod (+) kar denge
	
	totalsum+= arr[i];
	arr[i]=-arr[i];
}               //    - -  npn wraping sum 
	wrapsum= totalsum +  kadane(arr,n);
	
	cout<<max(wrapsum,nonwrapsum)<<endl;
	
	return 0;
}
