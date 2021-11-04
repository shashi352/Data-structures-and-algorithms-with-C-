//Print a hollow rectangle
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int row,col;
  cin>>row>>col;
  
  for(int i=1;i<=row;i++){
  	for(int j=1;j<=col;j++){
  		if(i==1 || i==row || j==1 ||j==col){
		  cout<<"*";
		  }
  		 else {
		  cout<<" ";
		   }	   
	  } // yeha se new row print hogi
	      cout<<endl;
  }
  	
 
	return 0;
}
