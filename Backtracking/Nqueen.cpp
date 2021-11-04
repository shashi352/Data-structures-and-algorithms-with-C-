
#include<bits/stdc++.h>
using namespace std;

bool issafe(int** arr,int x,int y,int n){
	// for roe
	for(int row=0;row<x;row++){ // iterat whole first row with use of col
		if(arr[row][y]==1){
		return false;
	}
}
	// for left dignoses
	int row=x;
	int col=y;
	while(row>=0 && col>=0){
		if(arr[row][col]==1){
		return false;
    	}
	row--;
	col--;
	}
	row=x;
    col=y;
	// for right digloses
	while(row>=0 && col<n){
		if(arr[row][col]==1){
		return false;
    	}
	row--;
	col++;
	}
	return true;
}
// ew colude not use y because when its found its place on chessbord than he suddenly going to next row
bool nqueen(int** arr,int x,int n){

	if(x>=n){ // if x gis to the size of array
		return true;
	}
    
	for(int col=0;col<n;col++){
	    if(issafe(arr,x,col,n)){ // if that its a true than do it just do iy // first check for first queen than
	    	arr[x][col]==1; // place here queen

		if(nqueen(arr,x+1,n)){ // than check other queen by recursive call
			return true;
		}

		// if this condition not true than backtrack it
		arr[x][col]=0;   // backtracking
	}
	}
	return false;
}


int main(){

	int n;
	cin>>n;

	int** arr=new int*[n];
	for(int i=0;i<n;i++){
    	arr[i]=new int[n];
		  for(int j=0;j<n;j++){
		  	arr[i][j]==0;
		  }
	}


	if(nqueen(arr,0,n)){ // if this condition its true than do it

    	for(int i=0;i<n;i++){
		  for(int j=0;j<n;j++){
		  	cout<<arr[i][j]<<" ";
		  }cout<<endl;
	}

}


	return 0;
}
