#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k){
    
    for(int i=0;i<n-1;i++){
    	
    	for( int j=i+1;j<n;j++){
    		if(arr[i]+arr[j]==k){
    			cout<<i<<" "<<j<<endl;
    			return true;
			}
		}
	}
    
    return false;
}

int main(){
	
    
	int arr[20] = {1,4,45,4,3,4,5,6,5,4,5,4};
	int k=8;
	
	pairsum(arr,20,k); 
	// agar milega ka ka valu i aur j ko + kar ke to inde return honge
	

	
	return 0;
}
