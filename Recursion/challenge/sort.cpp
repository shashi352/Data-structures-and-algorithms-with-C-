#include<bits/stdc++.h>
using namespace std;

bool sort(int arr[],int n){
	
	if(n==1){// mean the array going to last so its is sorted
	   return 1; // return true mean array sorted
	}
	                                    // {1,2,3,4,5}
	bool restarray = sort(arr+1 , n-1); //     | here its start it becouse 0 index its sorted
	return (arr[0]<arr[1] && restarray); // if rest array is true than d this all thing
    //  if its true than return it arr[0]<arr[1]
}

int main(){
 
  int arr[]={1,2,3,4,5};
  cout<<sort(arr,5);
	
	return 0;
}
