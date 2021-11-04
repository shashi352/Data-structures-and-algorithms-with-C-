#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int i,j;
	for( i=0;i<=n;i++){
		
	  for(j=0;j<=n-i;j++){
	  	cout<<" ";
	  	
	  }
	  for(j=1;j<=i;j++){
	  	if(j==1){
       cout<<"*";}
	   else{
	   	cout<<" ";
	   }	
	  }
	  
	  for(j=0;j<=i;j++){
	  	if(j==i){
       cout<<"*";}
	   else{
	   	cout<<" ";
	   }	
	  }
	  
	  cout<<endl;
	}
	
	for( i=n;i>=0;i--){
		
	  for(j=0;j<=n-i;j++){
	  	cout<<" ";
	  	
	  }
	  for(j=1;j<=i;j++){
	  	if(j==1){
       cout<<"*";}
	   else{
	   	cout<<" ";
	   }	
	  }
	  
	  for(j=0;j<=i;j++){
	  	if(j==i){
       cout<<"*";}
	   else{
	   	cout<<" ";
	   }	
	  }
	  
	  cout<<endl;
	}

return 0;
}

