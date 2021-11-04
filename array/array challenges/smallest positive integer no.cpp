#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bool check[5]={false,false,false,false,false};
	
	for(int i=0;i<n;i++){
			if(arr[i]>=0){
			  check[arr[i]]= true;
			}
			
	}
	
	for(int i;i<n;i++){
		if(check[i]== false){
			cout<<check[i];
			break;
		}
		else{
		  cout<<"there is nothing there";
		}
	}
	
	return 0;
}
