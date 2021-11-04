#include<bits/stdc++.h>
using namespace std;
// Declaration the array 
int main(){
	
	int n,m;
	cin>>n>>m;
	int target;
	cin>>target;
	
	int arr[n][m];
	
	for(int i =0 ; i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
	bool flag= false;
	int r=0,c=n-1;
	
	while(r<m && c>=0){
		
		if(arr[r][c]==target){
			flag= true;
		}
         arr[n][m]>target ? r++:c--;
	}
	
  	if(flag){
		cout<<" The Key Is Found";
	}
	else{
		cout<<"The Key Is not Found try key ";		
	}
	
	
	return 0;
}
