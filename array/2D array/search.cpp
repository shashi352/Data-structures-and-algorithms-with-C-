#include<bits/stdc++.h>
using namespace std;
// searching the array 
int main(){
	
	int n,m;
	cin>>n>>m;
	
	int arr[n][m];
	
	for(int i =0 ; i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	 for(int i =0 ; i<n;i++){
		
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	 int x ;
	 cin>>x;
	 
	 bool flag= false;
	 for(int i =0 ; i<n;i++){
		
		for(int j=0;j<m;j++){
			if(arr[i][j]==x){
			cout<<i<<j<<" " <<x<<endl;
			flag= true;
		}
		}
	}
	if(flag){
		cout<<" The Key Is Found";
	}
	else{
		cout<<"The Key Is not Found try key ";		
	}
	
	return 0;
}
