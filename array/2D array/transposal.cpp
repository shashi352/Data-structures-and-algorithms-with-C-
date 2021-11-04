#include<bits/stdc++.h>
using namespace std;
// searching the array 
int main(){
	
	int n =3;
	
	
	int arr[n][n]={{1,2,3},{3,2,1},{3,1,2}};
	
	for(int i =0 ; i<n;i++){
		for(int j=i;j<n;j++){
			
			int temp = arr[i][j];
			   arr[i][j]=arr[j][i];
			   arr[j][i]=temp;
		}
	}
	// print transposel
	 for(int i =0 ; i<n;i++){
		
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

 	
	return 0;
}
