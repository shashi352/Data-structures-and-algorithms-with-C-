#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
    int i,j;

	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=n;j++)
		   {if(i==1 || j==1 ||i==n || j==n ) {
		   	cout<<"*";
		   }
		   else{
		   	cout<<" ";
		   }
		    
		   }cout<<endl;
	}
	return 0;
}


