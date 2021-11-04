#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k){
    
    int low = 0;
    int high = n-1;
	
    while(low<high){
    	
    	if(arr[low]+arr[high] == k){
    		cout<<low<<" "<<high;
		}
		else if(arr[low]+arr[high]>k){
			high--;
		}
		else{
			low++;
		}
	}
 
    return false;
}

int main(){
	
    // agar array sorted order main ho to 
	int arr[9] = {0,1,2,3,5,7,8,9,10}; // right out put reurn index 0 and 6 but looping 
	int k=8;
	
	pairsum(arr,9,k); 
	// agar milega ka ka valu i aur j ko + kar ke to inde return honge
	

	
	return 0;
}
