#include<bits/stdc++.h>
using namespace std;
// searching the array 
int main(){
	
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	int n[n1][n2],m[n2][n3],ans[n1][n2];
	
	
	for(int i =0 ; i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>n[i][j];
		}
	}
	for(int i =0 ; i<n2;i++){
		for(int j=0;j<n3;j++){
			cin>>m[i][j];
		}
	}
	for(int i =0 ; i<n2;i++){
		for(int j=0;j<n3;j++){
			ans[i][j]=0;
		}
	}
	
	for(int i =0 ; i<n1;i++){
		for(int j=0;j<n3;j++){
			for(int k=0;k<n3;k++){
			
			ans[i][j]+=n[i][j]*m[i][j];
		}
		}
	}
	// print ans=n*m matrix
	for(int i =0 ; i<n1;i++){
		
		for(int j=0;j<n3;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

 	
	return 0;
}
